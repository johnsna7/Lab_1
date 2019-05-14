/****************************************************
 * Function Name: getInt
 * Author: Nathan Johnson
 * Date: 04.05.2019
 * Description: Returns validated int from user input
 * ***************************************************/

#include "getInt.hpp"
#include <iostream>

int getInt()
{
   int input = 0;
   bool validInput = false;
   
   // Prompt for user input
   // Used info from stackoverflow.com/questions/2075898/good-input-validation-loop-using-cin-c
   while ( !validInput ) // Loops until receive valid input
   {
      int tempIn = 0;
      std::cout << "Please enter an integer." << std::endl;
      if ( std::cin >> tempIn )
      {
         input = tempIn;
         validInput = true;
      }

      else
      {
         std::cout << "Invalid input, please try again." << std::endl;
         std::cin.clear();
         std::cin.ignore(96, '\n');
      }
   }

   return input;
}
