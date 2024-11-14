#include <stdlib.h>

#define NULL_MATRIX matrixConstructor(0,0)

typedef struct customDataTypeToAbstractMatricesAway matrix;
// example: for 3x4 matrix*, row = 4, column = 3... I think

matrix* matrixConstructor(size_t row, size_t column); // default constructor. Keep it simple, no need to get fancy.
int* matrixElement(matrix*, int, int); // accesses matrix element (indexing starts from 0,0) (function returns pointer so one may edit or view the element)
void matrixDestructor(matrix*); // gotta destroy it cuz memory is in heap and all
