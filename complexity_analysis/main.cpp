#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cout << "Hello, World!" << std::endl;
	}

	// The runtime complexity of the above for loop
	// is O(n)
	//
	// ^ "Big O notation"
	
	for (int i = 0; i < n + 12; i++) {
		std::cout << "Hello, World!" << std::endl;
	}

	// The runtime complexity of the above for loop
	// is O(n)
	
	// To use big O notation, here are the steps:
	// 1. Count the number of operations performed by the algorithm
	// 2. Simplify
	// 2.a. Remove coefficients
	// 2.b. Remove non-dominant terms. Constants are the least-dominant
	// 		terms. Logarithms are less dominant than polynomial
	// 		terms, but of course more dominant than constants.
	// 2.c. Remove logarithm bases
	// 2.d. If the only term is a constant, then the complexity is written
	// 	as O(1)
	
	// O(log(n))
	
	for (int i = 0; i < 10; i++) {
		// Do some constant number of operations in here
	}

	// O(1)
	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// Some O(1) operations in here
		}
	}

	// Runtime complexity: O(n^2)
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			// Some O(1) operations in here
		}
	}

	// Runtime complexity: 
	// 0 + 1 + 2 + 3 + 4 + ... + (N - 1)
	// 
	// ((0 + N - 1) / 2) * N
	//
	// O(n^2)
	
	for (int i = n; i >= 1; i /= 2) {
		// Some O(1) operations in here
	}

	// Runtime complexity: O(log(n))
	
	// O(1): Constant complexity
	// O(log(n)): Logarithmic complexity
	// O(n): Linear complexity
	// O(n^2): Quadratic complexity
	// O(n log(n)): Linearithmic complexity
	
	// In CS 162, when measuring complexities, measure in the "worst case"
	
	// Runtime complexity of insertion sort on list of size N in the worst
	// case: O(n^2)
	//
	// For each element in the list:
	// 	While the element is smaller than the element to its left:
	// 		Swap the element with the element to its left

	// Space complexity is a measure of the amount of ADDITIONAL memory
	// allocated by the algorithm. We're also only interested in the
	// PEAK additional memory.
	
	// For example, in-place sorting algorithms tend to have constant
	// space complexity (O(1))
}
