#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#define MAXSIZE 100 

int arraySize;
int array[MAXSIZE];

int* performInsertion(int[], int, int);
void insertInArray(int[], int, int);
int* performDeletion(int[], int);
void deleteInArray(int[]);
void linearSearch(int[], int);
void binarySearch(int[], int, int, int);
void swapElements(int*, int*);
void selectionSort(int[]); 
void bubbleSort(int[]);
void displayAll(int[]);
