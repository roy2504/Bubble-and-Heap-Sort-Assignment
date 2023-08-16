#include "heap.h"

//Gitesh - DSA - Assignment 6 - S23

// Compare the items
int less(Item a, Item b) {
	return a.key < b.key;
}

// Swithch the positions of two items in the array
void exchange(Item a[], int i, int j) {
	Item tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

// Build a max-heap using the bottom-up (heapify) approach
void heapify(Item a[], int size) {

	for (int k = size / 2; k = 1; k--) {           //k is index of the modified node
		FixDown(a, k, size);                       //Call function
	}			                                             
				
}				                                              
						
// Restore the heap property for the element at index k
void FixDown(Item a[], int k, int N) {                 //N is number of Items in heap

	int j;                                             // j is index of left child, j + 1 is right child
	while (2 * k <= N) {                               // index of the child node is less than or equal to the total number of elements 

		j = 2 * k;

		// Compare child nodes to find the greatest one
		if (j < N && less(a[j], a[j + 1])) {
			j++;
		}

		// In case parent is larger than the larger child, break
		if (!less(a[k], a[j])) {
			break;
		}

		// Switch the parent with larger child
		exchange(a, k, j);
		k = j;
	}
}