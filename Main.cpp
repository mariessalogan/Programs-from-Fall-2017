#include <iostream>
#include "Book.hpp"
#include "Patron.hpp"
int main()
{
  Book b1("123", "War and Peace", "Tolstoy");
  Book b2("234", "Moby Dick", "Melville");
  Book b3("345", "Phantom Tollbooth", "juster");

  std::cout << "Book 1 IDcode: "<< b1.getIdCode() << "\n";
  std::cout << "Book 1 Title: " << b1.getTitle() << "\n";
  std::cout << "Book 1 Author: " << b1.getAuthor() << "\n";
  std::cout << "Book 1 location: " << b1.getLocation() << "\n";

  std::cout << "Book 2 IDcode: "<< b2.getIdCode() << "\n";
  std::cout << "Book 2 Title: " << b2.getTitle() << "\n";
  std::cout << "Book 2 Author: " << b2.getAuthor() << "\n";
  std::cout << "Book 2 location: " << b2.getLocation() << "\n";

  std::cout << "Book 3 IDcode: "<< b3.getIdCode() << "\n";
  std::cout << "Book 3 Title: " << b3.getTitle() << "\n";
  std::cout << "Book 3 Author: " << b3.getAuthor() << "\n";
  std::cout << "Book 3 location: " << b3.getLocation() << "\n";

  Patron p1("98", "Bob");
  Patron p2("43", "Nancy");
  Patron p3("56", "Steve");

  std::cout << "1st patron's ID: " << p1.getIdNum() << "\n";
  std::cout << "1st patron's name: " << p1.getName() << "\n";
  std::cout << "1st patron's fine: " << p1.getFineAmount() << "\n";
  p1.amendFine(2.5);
  std::cout << "Add 2.50: " << p1.getFineAmount() << "\n";

  std::cout << "2nd patron's ID: " << p2.getIdNum() << "\n";
  std::cout << "2nd patron's name: " << p2.getName() << "\n";
  p2.addBook(&b1);
  b1.setCheckedOutBy(&p2);
  std::cout << b1.getCheckedOutBy() << "checked out " <<p2.getCheckedOutBooks()
  << "\n";
   
  std::cout << "3rd patron's ID: " << p3.getIdNum() << "\n";
  std::cout << "3rd patron's name: " << p3.getName() << "\n";
  return 0;
}
