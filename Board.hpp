//**************************************************************
//Author: Mariessa Logan
//Date:11/20/2017
//Description: This is the class definition for Board which will represent
//a tic tac toe board.
//**************************************************************
#ifndef BOARD_HPP
#define BOARD_HPP
#include <iostream>

//enum definition
enum Record{X_WON, O_WON, DRAW, UNFINISHED};
//Class declaration
class Board
{
  private:
    char location[3][3];//array data member
  public:
    Board();//default constructor
    bool makeMove(int xcoord, int ycoord, char player);
    Record gameState();
    void print();
};
#endif 
