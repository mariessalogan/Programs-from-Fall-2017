//*******************************************************
//Author: Mariessa Logan
//Date: 11/16/2017
//Description: This is the class initiator for the books in the library.
//*******************************************************
#include <iostream>
#include "Book.hpp"
#include <string>
//Book constructor
Book::Book(std::string idc, std::string t, std::string a)
{
  //Call the ID title and author member variables. 
  idCode = idc;
  title = t;
  author = a;
  //Initialize the locationa nd status of the object
  setCheckedOutBy(NULL);
  setRequestedBy(NULL);
  setLocation(ON_SHELF);
}
//get's the length of check out
int Book::getCheckOutLength()
{
  return CHECK_OUT_LENGTH;
}
//gets the book's id code
std::string Book::getIdCode()
{
  return idCode;
} 
//gets a book's title
std::string Book::getTitle()
{
  return title;
}
//gets a book's author
std::string Book::getAuthor()
{
  return author;
}
//gets a book's location
Locale Book::getLocation()
{
  return location;
}
void Book::setLocation(Locale loc)
{
  location = loc;
}
Patron* Book::getCheckedOutBy()
{
  return checkedOutBy;
}
void Book::setCheckedOutBy(Patron* checkedby)
{
  checkedOutBy = checkedby;
}
Patron* Book::getRequestedBy()
{
  return requestedBy;
}
void Book::setRequestedBy(Patron* reqBy)
{
  requestedBy = reqBy;
} 
int Book::getDateCheckedOut()
{
  return dateCheckedOut;
}
void Book::setDateCheckedOut(int date)
{
  dateCheckedOut = date;
}

