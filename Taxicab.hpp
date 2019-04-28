//**********************************************************
//Author: Mariessa Logan
//Date: 10/25/17
//Description: This is the class declaration for taxi cab.
//*********************************************************
#ifndef Taxicab_hpp
#define Taxicab_hpp

//Taxicab Class declarations
class Taxicab
{
  private:
    int coordx;
    int coordy;
    int distanceTraveled;
  public:
    // getters
    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();
    //Default constructor
    Taxicab();
    //Declaration of constructor
    Taxicab(int coordx, int coordy);
    void moveY(int ycoord);
    void moveX(int xcoord);
};
#endif 
