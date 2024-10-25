#include <iostream>

// 2 1 6 -10 2
//
//
//  1 7 12
// -2 5 100
//
// Memory is 1D
//
// Flattening
//
// Most common ordering: "Row-major" order. "Book order"
//
// index = row_index * num_columns + column_index

void print_table(int table[][3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << table[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

int main() {
	int matrix[2][3] {{1, -2, 7}, {12, 100, 5}};
	/*
	matrix[0][0] = 1;
	matrix[0][1] = -2;
	matrix[0][2] = 7;
	matrix[1][0] = 12;
	matrix[1][1] = 100;
	matrix[1][2] = 5;
	*/


	print_table(matrix, 2);
}
