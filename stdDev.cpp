//*******************************************************************
//Author: Mariessa Logan
//Date: 11/8/17
//Description: This is the Person class initiator.
//*******************************************************************
#include<iostream>
#include"Person.hpp"
#include<string>
#include<cmath>

double stdDev(Person, int);


//Standard Deviation Function
double stdDev(Person arr[], int size)
{
  //variables
  double avg = 0;
  double sqr = 0;
  double sum = 0 ;
  double average = 0;
  double square = 0;
  double addSquares = 0;
  double standard = 0;
  for(avg = 0; avg < size; avg++)
  {
    sum += (double)arr[avg].getAge();
  } 
  
  //average  
  average = sum / size;
  
  //Equation that finds the square of the difference of the number and the avg
  for(sqr = 0; sqr < size; sqr++)
  { 
    double num = 0; 
    square = ((double)arr[sqr].getAge() - average) * ((double)arr[sqr].getAge() - average);
    addSquares += square;
  }
  
  average = addSquares / size;
  standard = sqrt(average);
  
  return standard;
}
