//************************************************
//Main function to test my declaration and implementation
//***********************************************
#include <iostream>
#include <cmath>
#include "Taxicab.hpp"

int main()
{
  Taxicab cab1;
  Taxicab cab2(5, -8);
  cab1.moveX(3);
  cab1.moveY(-4);
  cab1.moveX(-1);
  std::cout<<cab1.getDistanceTraveled() << "\n";
  cab2.moveY(7);
  std::cout << cab2.getYCoord() << "\n";

  return 0;
}
