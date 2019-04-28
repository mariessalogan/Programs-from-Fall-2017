//***************************************************************
//Name:Mariessa Logan
//Date 10/29/2017
//Description: This is the initializer for the Player stats.
//***************************************************************
#ifndef PLAYER_hpp
#define PLAYER_hpp
//This is so we can use strings for the names
#include <string>
//Then we start the class.
class Player
{
//member variables
private:
  std::string name;
  int point;
  int rebound;
  int assist;
public:
  //default constructor
  Player();
  //Constructor
  Player(std::string , int, int, int);
  //Setters
  void setName(std::string);
  void setPoint(int);
  void setRebound(int);
  void setAssist(int);
  //getters
  std::string getName();
  int getPoint();
  int getRebound();
  int getAssist();
  //True or False mutator
  bool hasMorePointsThan(Player);
}; 
#endif
