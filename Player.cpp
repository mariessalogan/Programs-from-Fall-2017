//***************************************************************
//Name:Mariessa Logan
//Date 10/29/17
//Description: This is the code to run information from Player.hpp
//***************************************************************
#include <iostream>
#include <string>
#include "Player.hpp"

Player::Player()
{
  setName("");
  setPoint(-1);
  setRebound(-1);
  setAssist(-1);
}
//This constructor will take input from the Main to change the variables
Player::Player(std::string nameIn, int pointIn, int reboundIn, int assistIn)
{
  name = nameIn;
  point = pointIn;
  rebound = reboundIn;
  assist = assistIn; 
} 
//Setter functions
void Player::setName(std::string nameIn)
{
  name = nameIn;
}
void Player::setPoint(int pointIn)
{
  point = pointIn;
}
void Player::setRebound(int reboundIn)
{
  rebound = reboundIn;
}
void Player::setAssist(int assistIn)
{
  assist = assistIn;
}

//Getter Functions
std::string Player::getName()
{
  return name;
}
int Player::getPoint()
{
  return point;
}
int Player::getRebound()
{
  return rebound;
}
int Player::getAssist()
{
  return assist;
}
//Boolean function that lets us know if the player has more points than another
bool Player::hasMorePointsThan(Player secPlayer)
{
  int firstpoint = getPoint();
  int secpoint = secPlayer.getPoint();
  if( firstpoint > secpoint)
    return true;
  else
    return false;
}
