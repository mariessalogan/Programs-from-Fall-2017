//**************************
//Author: Mariessa Logan
//Date: 10/3/2017
//Description: This program takes a number from 0-99 and shows how many of each type of coin you get for change.
//***************************
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
  int cent, 
             q,
             d,
             n;
      

  //This is where the user enters the amount in cents.
  std::cout << "Please enter an amount in cents less than a dollar.\n";
  std::cin >> cent ;
  std::cout << "Your change will be:\n";

 //This will first calculate how many quarters will be given.
  q = cent / 25 ;
  std::cout << "Q: " << q << "\n" ;
 
  //This will calculate how many dimes will be given from the remainder
  cent %= 25 ;
  d = cent / 10 ;
  std::cout << "D: " << d << "\n" ;

  //This will calculate how many nickels can be given from the remainder
  cent %= 10 ;
  n = cent / 5 ;
  std::cout << "N: " << n << "\n" ;

  //This will calculate how many pennies are left over.
  cent %= 5 ;
  std::cout << "P: " << cent << std::endl ;

  return 0;
}
