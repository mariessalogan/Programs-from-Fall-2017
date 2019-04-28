//****************************************************************
//Name: Mariessa Logan
//Date: 10/29/17
//Description: This is the initiator that sets the types of players.
//****************************************************************
#ifndef TEAM_hpp
#define TEAM_hpp
//This will include the Player class
#include "Player.hpp"
//Class declaration
class Team
{
private:
  //Member variables
  Player pointGuard;
  Player shootingGuard;
  Player smallForward;
  Player powerForward;
  Player center;
  Player point;
public:
  //Constructor that gets Player info and inputs into team roles
  Team(Player, Player, Player, Player, Player);
  //setters
  void setPointGuard(Player);
  void setShootingGuard(Player);
  void setSmallForward(Player);
  void setPowerForward(Player);
  void setCenter(Player);
  //getters
  Player getPointGuard();
  Player getShootingGuard();
  Player getSmallForward();
  Player getPowerForward();
  Player getCenter();
  //Function to get total team points.
  int totalPoints(Player, Player, Player, Player, Player);     

};
#endif
