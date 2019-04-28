//This is the main file for box
#include <iostream>
#include "Box.hpp"
using namespace std;

int main()
{
  Box height;
  Box width;
  Box length;
  double  surfArea;
  double  vol;

  Box box1;
  Box box2(2.4, 3.6, 5.7);

 // Box::height.Set(2.0);
 // cout << Box:: height.get();
  
 // Box::width.Set(3.0);
 // cout << Box::width.Get();

 // Box::length.Set(4.0);
 // cout << Box::length.Get();
  
  vol = box2.calcVolume();
  cout << "the volume is: " << vol <<"\n" ;

  surfArea = box2.calcSurfaceArea();
  cout << "the surface area: " << surfArea << "\n";
  return 0;
}  
