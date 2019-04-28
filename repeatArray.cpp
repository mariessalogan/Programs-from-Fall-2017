/*******************************************************
 * Author: Mariessa Logan
 * Date: 11/13/17
 * Description: This program takes an array that has dynamically allocated
 * memory and replaces the array with one that is twice as large.
 * ******************************************************/
#include<iostream>

//Prototype
void repeatArray(double*&arr,int size);
//Function
void repeatArray(double*&arr, int size)
{
  //This will set the larger size
  int newSize = (size*2);
  //This will set the new pointer with dynamic memory
  double *arr2 = new double[newSize];
  int i = 0;
  int j = 0;
  //This sets up the first half of the array
  while (i < size)
  {
    arr2[i] = arr[i];
    i++;
  }
  //This is the second half of the array
  while (i >= size && i < newSize)
  {
    arr2[i] = arr[j];
    i++;
    j++;
  }
  //This will clear the memory 
  delete []arr;
  arr = arr2;
}
/*
int main ()
{
  double* myArray = new double[3];
  for (int i =0; i<3; i++)
   { myArray[i] = (i+1)*2;
    std::cout << myArray[i] << " \n";
   }

  repeatArray(myArray, 3);
  std::cout << "After being passed to main: \n";
  for (int i=0; i<6; i++)
    std::cout <<  myArray[i] << " \n";
 // delete [] myArray;
 // myArray = nullptr;
  return 0;
} */

