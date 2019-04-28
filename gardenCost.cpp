/********************************
 * * Author : Mariessa Logan
 * * Date : 9/24/17
 * * Description : This program calculates how much it costs to build a flower  garden display.
 * *****************************/
#include <iostream>
using namespace std;

int main()
{
  double soil, seeds, fence, cost;

  //Get the cost of the soil
    cout << "What does the soil cost?\n" ;
    cin  >> soil;

  //Get the cost of flower seeds
    cout << "What do the flower seeds cost?\n" ;
    cin  >> seeds; 

  //Get the cost of the fencing
     cout << "What does the fence cost?\n" ; 

    cin  >> fence; 

  //Calculate the total cost
     cost = soil + seeds + fence;

  //Display the cost
    cout << "The total cost is " << cost <<endl;
 
  return 0;
}  
