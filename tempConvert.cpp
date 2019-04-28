//****************************
//*Author:Mariessa Logan
//*Date :  10/3/17
//*Description : This program converts celsius temperatures into fahrenheit.
//**************************
#include <iostream>
#include <iomanip>
using namespace std;
 
int main ()
{
  double celsius,
         fahrenheit ;
  //This is where the user enters the celsius temperature 
  cout << "Please enter a Celsius temperature. \n" ;
  cin >> celsius;
  
  //This calculates the conversion.
  fahrenheit = celsius * (9.0 / 5.0 ) + 32.0 ;
  
  //This states what the temperature is in Fahrenheit.
  cout << "The equivalent Fahrenheit temperature is:\n" << fahrenheit << endl ;

  return 0 ;

}




