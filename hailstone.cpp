//***********************************************
//Author: Mariessa Logan
//Date 10/18/17
//Description: This program will tell you how many times it
//takes to get back to 1 after dividing evens by 2 and multiplying 
//odd numbers by 3.
//**********************************************
#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
//function prototype
int hailstone(int);

//int main()
//{
 // int num;
 // cout << " what is the number?\n";
 // cin >> num;
 // num = hailstone(num);
  //cout << num << "\n";
//  return 0;
//}
int hailstone(int num)//Function header
{
  int loops = 0;//variable that counts loops needed to get to 1
  while(num != 1)//Loop that will continue unless num = 1
  {
    loops++;//Accumalator
    if( num % 2 == 0)//if num is even then
    {
       num = num / 2;
    }
    else//if num is odd
    { 
      num = num * 3 + 1 ; 
    }
  }
  return loops;//returns amount of loops
}
