//*************************************
//Author:Mariessa Logan
//Date: 11/7/2017
//Description: This is the class Person that will be called to get the name and
//age of the people.
//************************************ 
#include<iostream>
#include<string>
#ifndef PERSON_HPP
#define PERSON_HPP

//Class declarator
class Person
{
  private:
    //member variables
    std::string name;
    double age;
  public:
    //Constructors
    Person ();
    Person (std::string, double);
    //Functions
    std::string getName();
    double getAge ();
};
#endif
