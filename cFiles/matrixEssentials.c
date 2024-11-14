#include "../headers/matrixEssentials.h"


struct customDataTypeToAbstractMatricesAway{int* data; size_t row; size_t column;} // verbose name for clarity and so that noone uses it that way.

matrix* matrixConstructor(size_t row, size_t column){
	int *data = (int *)malloc(row*column*sizeof(int));
	matrix *toReturn = (matrix *)malloc(sizeof(matrix));
	toReturn->row = row;
	toReturn->column = column;
	return toReturn;
}

// Decide what would be the best way to list the parameters. Just for this function, but for all the functions in general
int* matrixElement(matrix* Matrix, unsigned int rowNumber, unsigned int columnNumber){
	// return error value (and write to stderr) when rowNumber or columnNumber are out of bounds (fuck gonna need to import stdio for that)
	// elements are stored in row-major order
	// yeah I think people might constantly confuse the rows and columns. Oh well... (issue for later)
	if (rowNumber >= Matrix->row || columnNumber >= Matrix->column){ //Put the equal-to condition cuz Matrix->row >= 1 always but rowNumber >= 0.
									 //They start from different values. Basically what happens in C
									 //Also, this works splendidly even when provided a NULL_MATRIX
		return NULL; // also should probably write to stderr... use an ifdef preprocessor directive and use stderr if it exists
	}
	return (Matrix->data + (Matrix->column)*rowNumber + columnNumber);
}

void matrixDestructor(matrix* toDelete){
	free(toDelete->data);
	free(toDelete);
} // I thiiiiink it worked. Should probably work. Cleared all the heap space... Hmm, and the row and column are stored in the stack anyways


// What I learnt: Writing good code is more about the structure. Algorithms are good, and efficiency is always desired, ofc. But good program structure must never be compromised
