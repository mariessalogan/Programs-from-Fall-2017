//**************************************************************
//Author: Mariessa Logan
//Date: 11/6/17
//Descriptions: This is a function that finds the median of an array.
//*************************************************************
#include <iostream>
#include <algorithm>
//Function Prototype
int findMedian (int median[],int size);
//int main()
//{
//  const int ARRAY_SIZE = 6;
//  int ind = 0;
//  int median[6] = {6, 7,12,13,1,3};
//  std::sort(median, median + ARRAY_SIZE);
//  for (int ind = 0 ; ind < ARRAY_SIZE; ind++)
//    std::cout<< median[ind] <<" \n" ;
//  std::cout << "the median is " << findMedian(median, ARRAY_SIZE)<< ".\n";
//  return 0; 
//}
int findMedian(int median[], int size)
{
  std::sort(median, median + size);
  if (size % 2 == 0)
  {
    double med;
    med = (median[(size/2)]+ median[((size/2) - 1 )])/2;
    return med;
  }
  else
  {
    double med;
    med = (median[size/2]);
    return med;
  }
}
