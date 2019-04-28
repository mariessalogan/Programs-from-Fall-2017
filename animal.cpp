/*****************************
 * * Author: Mariessa Logan
 * * Date: 9/24/17
 * * Description: This program recognizes the input of your favorite animal and says it back to you
 * ***************************/
 
  #include <iostream>
  #include <string>

  //a simple example program
  int main()
  {
      std::string faveAnimal;
      std::cout << "Please enter your favorite animal." << std::endl;
      std::cin >> faveAnimal;
      std::cout << "Your favorite animal is the " << faveAnimal;
      std:: cout << "." << std::endl;

      return 0;
  }
