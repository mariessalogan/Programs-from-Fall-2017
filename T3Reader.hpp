//******************************************************************
//Author: Mariessa Logan
//Date: 11/21/2017
//Description: This declares the T3Reader class.
//******************************************************************
#ifndef T3READER_HPP
#define T3READER_HPP
#include <iostream>
#include <fstream>
#include <string>
#include "Board.hpp"

class T3Reader
{
  private:
    //This will help mark the x or o on the board 
    Board location;
    //This will let us know who the player is
    char player;
  public:
    //default constructor
    T3Reader();
    //Constructor
    T3Reader(char player);
    //This function will get the file info
    bool readGameFile(std::string fileName);
};
#endif
