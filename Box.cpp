//*****************************
//Author: Mariessa Logan
//Date: 10/24/17
//Description: This is the file that contains the constructors and functions
//to find the volume and surface area of a box, that is declared in another 
//class.
//****************************
#include <iostream>
#include "Box.hpp"

//Constructor
Box::Box(double hei, double wid, double len) 
{
  height = hei;
  width = wid;
  length = len;
}
//Setters
void Box::setHeight(double hei)
{
 height = hei;
}
void Box::setWidth(double wid)
{
 width = wid;
}
void Box::setLength(double len)
{
 length = len;
}
//getters
double Box::getHeight()
{
 return height;
} 
double Box::getWidth()
{
 return width;
}
double Box::getLength()
{
 return length;
}
//Functions - the first function calculates the surface area
double Box::calcSurfaceArea()
{
  double surfArea;
  surfArea = (2.0*height*width)+(2.0*width*length)+(2.0*height*length);
  return surfArea;
}
//This function calculates the volume
double Box::calcVolume()
{
  double vol;
  vol = height*width*length;
  return vol;
}
