//*****************************************************************
//Author: Mariessa Logan
//Date: 11/26/2017
//Description: This is the initiator of the Library Class
//****************************************************************
#include <iostream>
#include "Library.hpp"

//constructor
Library::Library()
{
  currentDate = 0;
}
//Uses push back to add books to the vector
void Library::addBook(Book* bk)
{
  holdings.push_back(bk);
} 
//Uses push back to add patrons to the vector
void Library::addPatron(Patron* pt)
{
  members.push_back(pt);
}
//This checks out the book for a patron
std::string Library::checkOutBook(std::string pID, std::string bID)
{
  //pointer variable to access the book object
  Patron *pt = getPatron(pID);
  Book *bk = getBook(bID);
  //conditonal loops to check if book is availabe or if patron is a member
  if(bk == NULL)
  {
    //book is not in the library catalog
    //std::cout << "book not found\n";
    return "book not found";
  }
  else
  {
    if(pt == NULL)
    {
      //Person is not a member
      //std::cout <<" patron not found\n";
      return "patron not found";
    }
    else if((*bk).getLocation() == CHECKED_OUT)
    {
      //book is already checked out
      //std::cout << "Book is already checked out :(\n";
      return "book already checked out";
    }
    else if((*bk).getRequestedBy() != pt && (*bk).getRequestedBy() !=NULL) 
    {
      //book is already on hold
      //std::cout << "Book is already requested by another patron :(\n";
      return "book on hold by another patron";
    } 
    //YAY! The book is available!
    else
    {
      //Use Setting functions to set checked out and everything
      (*bk).setLocation(CHECKED_OUT);
      (*bk).setCheckedOutBy(pt);
      (*bk).setDateCheckedOut(currentDate);
      //Use the setting functions for the patron too!
      (*pt).addBook(bk);
      //make sure to update requested by so other people can request it!
      (*bk).setRequestedBy(NULL);
      return "check out successful"; 
    }
  } 
} 
std::string Library::returnBook(std::string bID)
{
  Book *bk = getBook(bID);
  Patron *pt = (*bk).getCheckedOutBy();
  if(bk - NULL)
  {
    //std::cout << "Book not found\n";
    return "book not found";
  }   
  else if((*bk).getLocation() != CHECKED_OUT)
  {
    //std::cout << "This book is not checked out homey.\n";
    return "book already in library";
  }
  else
  {
    //remove that book!
    (*pt).removeBook(bk);
    //remove that patron!
    (*bk).setCheckedOutBy(NULL);
    if((*bk).getRequestedBy() != NULL)
    {
      //std::cout << "This goes on the hold shelf. \n";
      (*bk).setLocation(ON_HOLD_SHELF);
    }  
    else
    {
      //std::cout << "This is going on the library shelf. \n";
      (*bk).setLocation(ON_SHELF);
    }
    return "return successful";
  }
}
std::string Library::requestBook(std::string pID, std::string bID)
{
  Book *bk = getBook(bID);
  Patron *pt = getPatron(pID);

  if(bk == NULL)
  {
    //std::cout << "This book isn't here yo.\n";
    return "book not found";
  }  
  else if(pt == NULL)
  {
    //std::cout << "You're not on the list.\n";
    return "patron not found";  
  } 
  else if((*bk).getRequestedBy() != pt && (*bk).getRequestedBy() != NULL)
  {
    //std::cout << "This is already on hold.\n";
    return "book on hold by another patron";
  }
  else
  {
    //Set the book to requested by
    (*bk).setRequestedBy(pt);
    //Change that location now!
    if((*bk).getLocation() == ON_SHELF)
      (*bk).setLocation(ON_HOLD_SHELF);
    //std::cout<< "You requested a book!\n";
    return "request successful";
  }
}
std::string Library::payFine(std::string pID, double payment)
{
  Patron *pt = getPatron(pID);
  
  if(pt == NULL)
  {
    //std::cout << "No such person here.\n";
    return "patron not found";
  }  
  else
  {
    //Use negative of payment variable so it subtracts payment
  
    (*pt).amendFine(-payment);
    return "payment successful";
  }
}
void Library::incrementCurrentDate()
{
  //Since the fine never changes, let's make it a constant
  const double fine = 0.10;
  //Professor Alcon wants us to increment this date here
  currentDate++;
  
  //now we have to increment all of the fines let's use the member vector
  for(int i=0; i <members.size(); i++)
  {
    //Set up the vector for the loops
    std::vector<Book*>ckOut = members[i]->getCheckedOutBooks();

    for(int j=0; j < ckOut.size(); j++)
      {
        //This will see how many days the book has been out
        int daysOut = currentDate - ckOut[j]->getDateCheckedOut();
        //This will run a loop to see if it's past 21 days
        if(daysOut > 21)
          members[j]->amendFine(fine);
      }
  }  
}
//Function to get the book 
Book* Library::getBook(std::string bID)
{
  //This will default the book to null in case nothing is entered
  Book* bk = NULL;
  //This is the accumulator iniation 
  int j = 0;

  //loop this thing!
  while(j<holdings.size() && bk == NULL)
  {
    //Let's add the books to the vector!
    bk = holdings[j];
    j++;
  }
  return bk;
}
//Last but not least, let's find that patron info
Patron* Library::getPatron(std::string pID)
{
  Patron* pt = NULL;
  int i = 0;

  while(i<members.size() && pt == NULL)
  {
    pt= members[i];
    i++;
  }  
  return pt;
}
