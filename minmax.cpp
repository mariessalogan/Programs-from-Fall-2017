//**************************************
//Author:Mariessa Logan
//Date: 10/8/17
//Description: This program lets the user decide how many integers they want
//to enter, then tell's them the minimum and maximum of the intergers they
//enter.
//**************************************
#include <iostream>
#include <iomanip>

int main()
{
  int numEnt,
            min,
            max,
            number,
            count = 1;
  std::cout << "How many integers would you like to enter?\n";
  std::cin >> numEnt;
  std::cout <<"Please enter " << numEnt << " integers.\n"; 
  std::cin >> number;
  min = number;
  max = number;
  for (count = 1; count < numEnt; count++)
  {
   std::cin >> number;

   if (number < min)
     min = number;
   if (number > max)
     max = number;
  } 
  std::cout << "min: " << min << "\n";
  std::cout << "max: " << max << "\n";
  return 0;
}
