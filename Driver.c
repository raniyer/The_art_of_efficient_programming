#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include "headerfile.h"

int* performInsertion(int array[], int element, int position)		//Indexing begins from 1.
{	
	int i = 0;
	for (i = (arraySize - 1); i >= position - 1; i--)
	      array[i+1] = array[i];
 	array[position-1] = element;
	arraySize++;
	return array;
}

void insertInArray(int array[], int element, int position)		
{
	if(position < 1 || position > (arraySize + 1))
	{
		printf("\nPosition out of bounds, please enter a valid position\n");
		return;
	}
	performInsertion(array, element, position);
}

int* performDeletion(int array[], int position)		//Indexing begins from 1.
{
	
	int i = 0;
	if(position > arraySize || position < 1) //If position is out of array bounds.
	{
		printf("\nPosition out of array bounds. \nKindly enter a position within the range 0 - %d\n", arraySize);
		return 0;
	}
	for (i = position - 1; i < arraySize; i++)
	      array[i] = array[i + 1];
	arraySize--;
	return array;
}

void deleteInArray(int array[])		
{
	int element, position;
	int choice;
	printf("\nEnter your choice. ");
	printf("\n1. Delete element.");
	printf("\n2. Delete at index.");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	//Deleting on the basis of element.
			printf("\nEnter the element to be deleted: ");
			scanf("%d",&element);
			int i, flag = 0;
			for(i = 0; i < arraySize; i++)
			{	
				if(array[i] == element)
				{
					performDeletion(array,i + 1);
					flag = 1;
					break;		
				}
			}
			if(!flag)
				printf("\nPlease enter a valid element value \n");
			break;
		
		case 2: //Deleting on the basis of position
			printf("\nEnter the position of the element to be deleted: ");
			scanf("%d", &position);
			performDeletion(array, position);			
			break;
		default: printf("\nPlease enter a valid choice \n");
			break;
	}
}

void linearSearch(int array[], int element)
{
	int i = 0;
	int flag = 0;
	for(i = 0; i < arraySize; i++)
	{
		if(array[i]==element)
		{
			flag = 1;
			printf("The postion of the element %d using linear search is : %d\n",element, (i + 1));		
		}
	}
	if(!flag)
		printf("\nElement %d was not found in arrayusing linear search.\n", element);
	return;
}

void binarySearch(int array[], int first, int last, int element) 
{ 
	while (first <= last) 
	{ 
        	int middle = first + ((last - first) / 2); 
		if (array[middle] == element) 
		{
			printf("\nThe position of the element %d using binary search operation is: %d\n",element, (middle + 1));		
			return;
		}
        	if (array[middle] < element) 
  			first = middle + 1; 
	        else		
			last = middle - 1; 
    	}
	printf("\nElement %d was not found in array using binary search operation.\n", element); 
} 

void swapElements(int *first, int *second) 
{ 
    int temporary = *first; 
    *first = *second; 
    *second = temporary; 
} 
  
void selectionSort(int array[]) 
{ 
	int i, j, min; 
  	// One by one move boundary of unsorted subarray 	
	for (i = 0; i < (arraySize - 1); i++) 
    	{ 
	        // Find the minimum element in unsorted array 
        	min = i; 
	        for (j = i+1; j < arraySize; j++) 
        		if (array[j] < array[min]) 
            			min = j; 
  
	        // Swap the found minimum element with the first element 
		swapElements(&array[min], &array[i]); 
	} 
} 
  
void bubbleSort(int array[])
{
	int i, j, temp;
 
 	for (i = 0 ; i < (arraySize - 1); i++)
  	{
		for (j = 0 ; j < (arraySize - i - 1); j++)
    		{
			if (array[j] > array[j+1])
      			{	
				swapElements(&array[j], &array[j+1]);
			}
		}
	}
}

void displayAll(int array[])
{
	int i;
	for(i = 0; i < arraySize; i++)
		printf("%d \t", array[i]);	
}

