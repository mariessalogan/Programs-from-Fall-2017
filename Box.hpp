//***********************************************
//Author: Mariessa Logan
//Date: 10/24/2016
//Description: This is the class specification file for Box
//********************************************
#ifndef Box_hpp
#define Box_hpp

//Box class declarations
class Box
{
  private:
    double height;
    double width;
    double length;
  public:
//setters
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
//getters
    double getHeight();
    double getWidth();
    double getLength();
    double calcSurfaceArea();
    double calcVolume();
    Box() //Default constructor declaration
    {
      height = 1.0;
      width = 1.0;
      length = 1.0;
    }
    Box(double height , double width , double length);//declaration of constructor
};
#endif 
