//*************************************************************
//Name: Mariessa Logan
//Date:10/25/17
//Description: This is the implementer for taxi cab. It will 
//measure the distance traveled by a taxi cab.
//*************************************************************
#include <iostream>
#include <cmath>
#include "Taxicab.hpp"

//Default constructor
Taxicab::Taxicab()
{
  coordx = 0;
  coordy = 0;
  distanceTraveled = 0;
}
//Constructor
Taxicab::Taxicab(int xcoord, int ycoord)
{
  coordx = xcoord;
  coordy = ycoord;
  distanceTraveled = 0;
}

//Getters
int Taxicab::getXCoord()
{
  return coordx;
}
int Taxicab::getYCoord()
{
  return coordy;
}
//Functions The first function will find distance traveled on x axis
void Taxicab::moveX(int xcoord)
{
  distanceTraveled += std::abs(xcoord);
  coordx += xcoord;
}  
//This function finds the distance moved on the y axis
void Taxicab::moveY(int ycoord)
{
  distanceTraveled += std::abs(ycoord);
  coordy += ycoord;
}
//This function will get the total distance traveled.
int Taxicab::getDistanceTraveled()
{
 return distanceTraveled;
}
