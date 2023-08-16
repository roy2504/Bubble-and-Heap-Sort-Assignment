#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 20000

//Gitesh - DSA - Assignment 6 - S23

typedef struct {
	int key;
}Item;

// Function definitions, from slides
int less(Item a, Item b);
void exchange(Item a[], int i, int j); 
void FixDown(Item a[], int k, int N); 
void heapify(Item a[], int size);