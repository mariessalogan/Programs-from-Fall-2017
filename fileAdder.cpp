//********************************
//Author: Mariessa Logan
//Date: 10/10/17
//Description: This program reads a file with integers in it, then creates 
//a file with the sum of the integers
//******************************
#include <iostream>
#include <fstream>
#include <string>

using std::ifstream;
using std::ofstream;
using std::string;
using std::cin;
using std::cout;

int main ()
{
  ifstream inputFile; //File stream code
  ofstream outputFile;
  string fileName; //This will hold the users input 
  double numValue = 0,
//This will be the numbers from the file
         sum = 0 ; //This is for the sum.

  std::cout << "Please enter your filename.\n";
  std::cin >> fileName; //User will enter file name here.

  inputFile.open(fileName); //Open the input file.
  if (inputFile)
  {
    while (inputFile >> numValue ) //Loop until there's until EOF
    {  
      
      sum += numValue; //Add's the total
    }
      inputFile.close();//Closes the input file.
      outputFile.open ("sum.txt"); //Opens output file
      outputFile << sum ;//Adds sume to file
      outputFile.close(); //Closes output file.
      std::cout << "result written to sum.txt\n";
      
    
  }
  else //if the file cannot be found
  {
    std::cout << "could not access file\n";//Error message 
  } 
  return 0;
}
