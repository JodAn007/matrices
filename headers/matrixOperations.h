#include "matrixEssentials.h"
#include <stdbool.h>

bool matrixEquality(matrix, matrix); //we need that cuz we are using pointers and now we can't use '=='
matrix inversion(matrix); //do check that the matrix is a square. Seperate function for the special inversions?
matrix transpose(matrix); //returns the transpose matrix. Matrices are created with a malloc call so dw about stack and all.
matrix addition(matrix, matrix); //check the shape always.
matrix multiplication(matrix, matrix); //don't forget to check matrix shape.

