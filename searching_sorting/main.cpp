void merge(int* array, int size) {
	// Create i, j, k = 0
	// Create a new array of size size
	int* new_array = new int[size];

	// Perform the merging algorithm
	
	// Copy new_array elements back into array
	
	// Delete new_array
}

void merge_sort(int* array, int size) {
	merge_sort(array, size / 2); // Sort the left half
	merge_sort(array + size / 2, size / 2); // Sort the right half

	// Merge the left half and the right half
	merge(array, size);
}
