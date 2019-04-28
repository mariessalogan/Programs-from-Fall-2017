#include "T3Reader.hpp"
#include <iostream>
using namespace std;

int main()
{
  T3Reader gamePlay('X');
  string filename;
  cout <<"Enter the file name: ";
  cin >> filename;
  bool result = gamePlay.readGameFile(filename);
  if(!result)
    cout << "\n Invalid moves in file";
  return 0; 
}
