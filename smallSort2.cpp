/****************************************************************
 * Author: Mariessa Logan
 * Date 11/13/17
 * Description: This program takes 3 int variables and sorts them into order
 * ****************************************************************/

#include <iostream>

//Prototype
void smallSort2(int, int, int);
//Function
void smallSort2(int *var1, int *var2, int *var3)
{
  int temp;
  //First loop to sort the variables 
  if(*var3 < *var2)
    {
      temp = *var3;
      *var3 = *var2;
      *var2 = temp;
    }     
  //Second loop
  if(*var2 < *var1)
    {
      temp = *var2;
      *var2 = *var1;
      *var1 = temp;
    }
  //Final loop!
  if(*var3 < *var2)
    {
      temp = *var3;
      *var3 = *var2;
      *var2 = temp;
    }
}

/*int main()
{
  int a = 75;
  int b = -15;
  int c = 732;
  std::cout << a << ", "<< b <<", " << c << "\n";
 
  smallSort2(&a, &b, &c);
  std::cout << a << ", "<< b <<", " << c << "\n";
  return 0; 
}*/

