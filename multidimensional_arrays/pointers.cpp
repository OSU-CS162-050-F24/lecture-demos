#include <iostream>

// 1 2 7
// -2 5 100
//
//
// [p1 p2]
//
// [1 2 7] // 0x0005
// [-2 5 100] // 0x5000

void print_table(int** table, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << table[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

int main() {
	int m;
	int n;
	std::cin >> m;
	std::cin >> n;
	int** array = new int*[m];
	for (int i = 0; i < m; i++) {
		array[i] = new int[n];
	}

	array[0][0] = 1;
	array[0][1] = -2;
	array[0][2] = 7;
	array[1][0] = 12;
	array[1][1] = 100;
	array[1][2] = 5;

	print_table(array, m, n);

	for (int i = 0; i < m; i++) {
		delete [] array[i];
	}
	delete [] array; // What does this do?
	
}
