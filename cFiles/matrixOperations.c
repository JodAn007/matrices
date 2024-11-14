#include "../headers/matrixOperations.h"

bool matrixEquality(matrix M1, matrix M2){
	if (!(M1->row == M2->row && M1->column == M2->column)) return false;
	if (M1->row == 0 || M1->column == 0) return true; //NULL_MATRIX or something weird.
	for (int i = 0; i < M1->row; i++){
		for (int j = 0; j < M1->column; j++){
			if (*matrixElement(M1, i, j) != *matrixElement(M2, i, j)) return false;
		}
	}
	return true;
}

matrix inversion(matrix toInvert){

}

matrix transpose(matrix toTranspose){
	matrix transposed = matrixConstructor(toTranspose->row, toTranspose->column);
	for (int i = 0; i < transposed->row; i++){
		for (int j = 0; j < transposed->column; j++){
			*matrixElement(transposed, i, j) = *matrixElement(toTranspose, j, i);
		}
	}
	return transposed;
}

matrix addition(matrix M1, matrix M2){
	if (!(M1->row == M2->row && M1->column == M2->column)) return NULL_MATRIX;
	//if (matrixEquality(M1, NULL_MATRIX) || matrixEquality(M2, NULL_MATRIX)) NOTE: Never do this. It may be that the matrix may have row=0 but column != 0
	if (M1->row==0 || M1->column==0) return NULL_MATRIX;
	matrix sum = matrixConstructor(M1->row, M1->column);
	for (int i = 0; i < sum->row; i++){
		for (int j = 0; j < sum->column; j++){
			*matrixElement(sum, i, j) = *matrixElement(M1, i, j) + *matrixElement(M2, i, j);
		}
	}
	return sum;
}


