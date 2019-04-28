//****************************************
//Author - Mariessa Logan
//Date - 10/17/17
//Description - This program uses a  formula
//to calculate the distance an object falls 
//due to gravity in a specific time period.
//***************************************
#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;

//Function Prototype
double fallDistance(double );
//*************
//int main()
//{
 // double dist,                 //variable for distance
   //      time;                 //variable for time in seconds
 // cout << "Enter time that object has fallen in seconds.\n" ;
 // cin >> time;
 // dist = fallDistance(time , dist);
 // cout << "The object has fallen " << dist << " meters.\n" ;
 // return 0;
//}
double fallDistance( double time) //Function header
{
  double grav = 9.8,//Extra variables
         half = 0.5;
  time = grav * half * time * time ;//equation to calculate distance 
  return time;//returns distance
}
