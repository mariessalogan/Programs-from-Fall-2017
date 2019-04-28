//*************************************************************
//Name: mariessa logan
//date: 10/31/17
//Description: This code runs the Team hpp file.
//*************************************************************
#include <iostream>
#include "Player.hpp"
#include "Team.hpp"
//constructor
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
  pointGuard = p1;
  shootingGuard = p2;
  smallForward = p3;
  powerForward = p4;
  powerForward = p5; 
}
void Team::setPointGuard(Player p1)
{
  pointGuard = p1;
}
void Team::setShootingGuard(Player p2)
{
  shootingGuard = p2;
}
void Team::setSmallForward(Player p3)
{
  smallForward = p3;
}
void Team::setPowerForward (Player  p4)
{
  powerForward = p4;
} 
void Team::setCenter (Player p5)
{
  center = p5;
}
//getters
Player Team::getPointGuard()
{
  return pointGuard;
}
Player Team::getShootingGuard()
{
  return shootingGuard;
}
Player Team::getSmallForward()
{
  return smallForward;
}
Player Team::getPowerForward()
{
  return powerForward;
}
Player Team::getCenter()
{
  return center;
}
//This function will find the total points of all of the players
int Team::totalPoints(Player pointGuard,Player shootingGuard, Player smallForward, Player powerForward, Player center)
{
  int total;
  int pgpoint,
      sgpoint,
      sfpoint,
      pfpoint,
      cpoint;
//This will convert the PLayer class type to int so the operand + will work.
  pgpoint = int( pointGuard.getPoint());
  sgpoint = int( shootingGuard.getPoint());
  sfpoint = int( smallForward.getPoint());
  pfpoint = int( powerForward.getPoint());
  cpoint = int( center.getPoint());
//This will find the total points.
  total = pgpoint + sgpoint + sfpoint + pfpoint + cpoint;  
  return total;
}
