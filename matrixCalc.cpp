/*********************************************************
 * Program Name: matrixCalc
 * Author: Nathan Johnson
 * Date: 04.06.2019
 * Description: Main for CS 162 Lab 1, matrix calculator
 * *******************************************************/

#include "readMatrix.hpp"
#include "determinant.hpp"
#include "getInt.hpp"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
   int matrixSizeIn = 0;

   // Prompt for Matrix Size
   cout << "Please enter Matrix size (either 2 or 3)" << endl;
   cin >> matrixSizeIn;

   // Input validation if matrix size is out of bounds
   while ( matrixSizeIn != 2 && matrixSizeIn != 3 )
   {
      cout << "Incorrect size entered, the matrix size must be 2 or 3" << endl;
      matrixSizeIn = getInt();
   }

   const int MATRIX_SIZE = matrixSizeIn;

   // Dynamically create matrix
   // stackoverflow.com/questions/16001803/pointer-to-pointer-dynamic-two-dimensinal-array
   int** matrix;
   matrix = new int*[MATRIX_SIZE]; // Allocate rows

   for ( int i = 0; i < MATRIX_SIZE; i++ )  // Allocate columns
   {
      matrix[i] = new int[MATRIX_SIZE];
   }

   // Fill matrix with readMatrix function
   readMatrix(matrix, MATRIX_SIZE);

   // Calculate determinant with determinant function
   int determ = 0;
   determ = determinant(matrix, MATRIX_SIZE);

   // Display Matrix and Determinant
   cout << "The matrix is:" << endl;

   for ( int i = 0; i < MATRIX_SIZE; i++ )
   {
      cout << "| ";
      for ( int j = 0; j < MATRIX_SIZE; j++ )
      {
         cout << matrix[i][j] << " | ";
      }

      cout << endl;
   }

   cout << "The determinant is " << determ << endl;

   // Free dynamically allocated memory
   for ( int i = 0; i < MATRIX_SIZE; i++ )
   {
      delete matrix[i];
   }

   delete matrix;
}
