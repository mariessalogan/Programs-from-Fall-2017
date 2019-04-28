//***************************************************
//Author: Mariessa Logan
//Date: 10/10/17
//Description: This is a game that allows a user to enter an integer
//and have a player guess what that integer was.
//***************************************************
#include <iostream>
using std::cout;
using std::cin;

int main ()
{
  int answer,//this will be the user's answer
      guess,//this will be what the player guesses
      numGuess = 1;//This will be how many times the user guesses.

  cout <<"Enter the number for the player to guess.\n";
  cin >> answer;//The user will enter the number.
  cout << "Enter your guess.\n"; //The player enters their guess 
  cin >> guess;
  
  while (guess != answer)//Loop until player guesses the answer
  {
   if (guess < answer)//if the player guesses too low. 
   {
     cout << "Too low - try again.\n";
   }
   else //if the player guesses too high.
   {
     cout << "Too high - try again.\n";
   } 
   cin >> guess;//Player enters guess again
   numGuess++;//Increases amount guessed.
  }  
  
  cout << "You guessed it in " << numGuess << " tries.\n";
  return 0;
}
