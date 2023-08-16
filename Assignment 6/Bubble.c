#include "Bubble.h"﻿

//Gitesh - DSA - Assignment 6 - S23

// Perform bubble sort on an array of integers 
//Sorting algorithm
void bubble(int a[], int size)
{
	int i, j, tmp;
	// Outer loop: Traverse through the entire array

	for (i = 0; i < (size - 1); i++) {
		// Inner Loop: Traverse through unsorted portion of the array
		
		for (j = 0; j < (size - 1) - i; j++) {
		
			// Compare adjacent elements and swap whenever the criteria is met
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1]; a[j + 1] = tmp;
			}
		}
	}
}
