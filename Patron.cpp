//***************************************************************
//Author: Mariessa Logan
//Date: 11/26/2017
//Description: This initiates the Patron Class.
//***************************************************************
#include <iostream>
#include "Patron.hpp"

Patron::Patron(std::string idn, std::string n)
{
  //initializes variables
  idNum = idn;
  name = n;
  //initializes fines to 0
  fineAmount = 0; 
}
//getters
std::string Patron::getIdNum()
{
  return idNum;
}
std::string Patron::getName()
{
  return name;
}
std::vector<Book*> Patron::getCheckedOutBooks()
{
  return checkedOutBooks;
}
//Functions that interact with the Book class
void Patron::addBook(Book* bk)
{
  checkedOutBooks.push_back(bk);
  //using the push back since size is not stated in vector. 
}
void Patron::removeBook(Book* bk)
{
  for(int i = 0; i < checkedOutBooks.size(); i++)
  {
    if(checkedOutBooks[i] == bk)
      checkedOutBooks.erase(checkedOutBooks.begin()+i);
  }
  //using the erase command to remove from vector.
}
double Patron::getFineAmount()
{
  return fineAmount;
}
//This will add or subtract from the fine
void Patron::amendFine(double amount)
{
  fineAmount += amount;
}
