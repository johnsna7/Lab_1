/****************************************************
 * Function Name: readMatrix
 * Author: Nathan Johnson
 * Date: 04.04.2019
 * Desctription: Steps through 2x2 or 3x3 matrix
 * to fill with user input
 * **************************************************/

#include "readMatrix.hpp"
#include "getInt.hpp"
#include <iostream>

void readMatrix( int** pMatrixIn, int matrixSize )
{
   // Step through loop to fill matrix
   for ( int i = 0; i < matrixSize; i++ )
   {
      for ( int j = 0; j < matrixSize; j++ )
      {
         // Prompt for int input
         std::cout << "Row " << (i + 1) << ", Column " << (j + 1) << std::endl;

         int input = 0;
         input = getInt(); // runs function getInt that returns an int
 
         pMatrixIn[i][j] = input;
      }
   }
}
