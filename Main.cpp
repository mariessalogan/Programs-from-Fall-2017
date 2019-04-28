//*******************************************************
//This is the main function for player and team
//******************************************************
#include <iostream>
#include "Team.hpp"
#include "Player.hpp"

int main ()
{
 // Player p1;
 // Player p2;
 // Player p3;
 // Player p4;
 // Player p5;
  Team total;

 // p1.setName("Shirley");
 // p2.setName("Sam");
 // p3.setName("Sandy");
 // p1.setPoint(1);
 // p2.setPoint(2);
 // p3.setPoint(3);
 // p1.setRebound(11);
 // p2.setRebound(14);
///  p3.setRebound(12);
 // p1.setAssist(2);
 // p2.setAssist(5);
 // p3.setAssist(9);
 // p4.setName("what");
 // p4.setPoint(4);
 // p4.setRebound(10);
 // p4.setAssist(3);
 // p5.setName("ind");
 // p5.setPoint(7); 
 /// std::cout << p1.getName() << "is the first player.\n";
 // std::cout << p1.getPoint() << "Points\n";
 // std::cout << p1.getRebound() << "Rebounds\n";
 // std::cout << p1.getAssist() << "Assists\n";

 // std::cout << p2.getName() << "is the second player.\n";
 // std::cout << p2.getPoint() << "Points\n";
 // std::cout << p2.getRebound() << "Rebounds\n";
 // std::cout << p2.getAssist() << "Assists\n";

 // std::cout << p3.getName() << "is the third player.\n";
 // std::cout << p3.getPoint() << "Points\n";
 // std::cout << p3.getRebound() << "Rebounds\n";
  //std::cout << p3.getAssist() << "Assists\n";

 // std::cout <<"P1 has more points than P2: " << p1.hasMorePointsThan(p2)<<"\n";
  Player p1("Shirley", 1, 11, 2);
  Player p2("Sam", 2, 14, 5);
  Player p3("Sandy", 3, 12, 9);
  Player p4("What", 4, 10, 3);
  Player p5("ind", 7, 0, 0);
  Team team1(p1,p2, p3, p4, p5);
  Player p = team1.getShootingGuard();
  std::cout <<"The shooting guard is " <<
p.getName();
  std::cout << "The total points is " << 
return 0;
}

