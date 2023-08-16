#include "Bubble.h"
#include "heap.h"

//Gitesh - DSA - Assignment 6 - S23

int main(void) {
	
    int array1[ARRAY_SIZE];
	int array2[ARRAY_SIZE]; 
    
	//Seed random number generator 
	srand(time(NULL));

	//Both arrays to be filled with random numbers 
	for (int i = 0; i < ARRAY_SIZE; i++) {	
		array1[i] = rand();
		array2[i] = array1[i];
	}
	
// SOrting begins here (Bubble sort)
   clock_t startTime = clock(); 
   bubble(array1, ARRAY_SIZE);
   clock_t endTime = clock();
   double bubbleSortTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;
  
   // Heap sorting
   Item heapArray[ARRAY_SIZE + 1];           // Heap is 1-indexed
   heapArray[0].key = 0;             
   
   for (int i = 0; i < ARRAY_SIZE; i++) {

	   heapArray[i + 1].key = array2[i];
   }
	
   startTime = clock();
   heapify(heapArray, ARRAY_SIZE);

   for (int i = ARRAY_SIZE; i > 1; i--) {

	   exchange(heapArray, 1, i);
	   FixDown(heapArray, 1, i - 1);
   }
   
   endTime = clock();
   double heapSortTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;
	
   // Display the sorted times
	printf("Bubble Sort Time: %f seconds\n", bubbleSortTime);
	printf("Heap Sort Time: %f seconds\n", heapSortTime);
	return 0;
}