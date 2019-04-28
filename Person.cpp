//****************************************************************
//Author:Mariessa Logan
//Date: 11/7/17
//Description: This code calls the Player class info.
//***************************************************************
#include<iostream>
#include"Person.hpp"
#include<string>

//Default constructor
Person::Person()
{
  std::string name = "";
  double age = -1;
}
//Constructor
Person::Person(std::string nameIn, double ageIn)
{
  name = nameIn;
  age = ageIn;
}
//Getter function
std::string Person::getName()
{
  return name;
}
double Person::getAge()
{
  return age;
}
