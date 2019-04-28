#include <iostream>
#include "Board.hpp"
#include <cctype>
//Function declarations

Board::Board()
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
      location[i][j] = 0; 
  } 
}

//Function to see if the space is open
bool Board::makeMove(int xcord, int ycord, char play)
{
  //if the square is not 0, there is an x or o
  if(location[xcord][ycord] != 0)
  {
   // std::cout << "This space is taken\n";
    return false;
  }
  else 
  {
    location[xcord][ycord] = play;
    //std::cout << "This space is open.\n";
    return true;
  }
}

Record Board::gameState()
{
//variable initiation for checking game is done  
  bool done = true;
  for(int i=0; i<3; i++) 
  {
//check if a horizontal or vertical play won
    if((location[i][0] == location[i][1]) && (location[i][1] == location[i][2]) && (location[i][2] == 'x'))
      return X_WON;
    if((location[i][0] == location[i][1]) && (location[i][1] == location[i][2]) && (location[i][2] == 'X'))
      return X_WON;
    if((location[i][0] == location[i][1]) && (location[i][1] == location[i][2]) && (location[i][2] == 'o'))
      return O_WON;
    if((location[i][0] == location[i][1]) && (location[i][1] == location[i][2]) && (location[i][2] == 'O'))
      return O_WON;
  }
//Check if a diagonal play won  
  if((location[0][0] == location[1][1]) && (location[1][1] == location [2][2]) && (location[2][2] == 'x'))
    return X_WON;
  if((location[0][0] == location[1][1]) && (location[1][1] == location [2][2]) && (location[2][2] == 'X'))
    return X_WON;
  if((location[0][0] == location[1][1]) && (location[1][1] == location [2][2]) && (location[2][2] == 'o'))
    return O_WON;
  if((location[0][0] == location[1][1]) && (location[1][1] == location [2][2]) && (location[2][2] == 'O'))
    return O_WON;

  for(int i = 0; i<3; i++)
  {
    for(int j = 0; j<3; j++)
//This will see if the game is done.
      if((location[i][j] != 'x')&&(location[i][j] != 'X') && (location[i][j] != 'o') && (location [i][j] != 'O'))
      {
        done = false;
        break;//This way it can return the answer that it's not done.
      }
    if(!done)
      return UNFINISHED;
  }
  return DRAW;
}
//This will print the board so I can debug
void Board::print()
{
  for(int i=0; i<3; i++)
    {
      for(int j=0; j<3; j++)
      {
        std::cout << location[i][j] << " | ";
      }
      std::cout << "\n---------\n";
    }
}
