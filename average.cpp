/**********************************
 * Author: Mariessa LOgan
 * Date: 10/2/17
 * Description: This program averages 5 numbers input by the user
 * *******************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double number1,
         number2,
         number3,
         number4,
         number5,
         average;

  //The user will input numbers here.
  cout << "Please enter five numbers.\n" ;
  cin >> number1 ;
  cin >> number2 ;
  cin >> number3 ;
  cin >> number4 ;
  cin >> number5 ;




  //This will show the average of the 5 numbers
  average = (number1 + number2 + number3 + number4 + number5) / 5 ;
  cout << "The average of those numbers is:\n" << average << endl ; 

  return 0 ;

}
