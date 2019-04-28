//**********************************
//Author: Mariessa Logan
//Date : 10/17/17
//Description: This proggram sorts numbers 
//in order from lowest to highest.
//**********************************
#include<iostream>
using std::cout;
using std::cin;

//function prototype
void smallSort(int &, int &, int &);

//int main()
//{
//  int first,
//      second, 
//      third;
//  cout << "Enter int a = ";
//  cin >> first;
//  cout << "enter int b = ";
//  cin >> second;
//  cout << "Enter int c = ";
//  cin >> third;
 // smallSort(first , second, third);
 // return 0;
//}
void smallSort(int &a, int &b, int &c)
{
  int temp;
  if(a > b)
  {
     temp = a;
     a = b;
     b = temp; 
  }
  if (b > c)
  {
     temp = b;
     b = c;
     c = temp;
  }
  if(a > b)
  {
     temp = a;
     a = b;
     b = temp;
  }
}
