#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include "headerfile.h"

int size = 0;

int main(void)
{
	int i, element, position;
	int option = 1;
	while(option)
	{	
		char choice;
		int element;
				printf("______________________________________________________________________________________________________________________________________________________");
		printf("\n\n\t\t\t\t\t\t\t\tThe Art of Efficient Programming\n\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t~ mentored by Mrinal Panday\n");
		printf("\n\n\t\t\t\t\t\tHello user, my name is NIDHI RANIYER, and this is my final project.\n");
		printf("_______________________________________________________________________________________________________________________________________________________");
		printf("\n\nCurrent size of the array : %d",arraySize);
		printf("\n\nEnter your choice : ");
		printf("\n\nPress 1 to insert an element.");
		printf("\nPress 2 to delete an element.");
		printf("\nPress 3 to perform Linear Search for an element.");
		printf("\nPress 4 to perform Binary Search for an element.");
		printf("\nPress 5 to perform Selection Sort on the array.");
		printf("\nPress 6 to perform Bubble Sort on the array.");
		printf("\nPress 7 to Display all elements of the array.\n\n");
		scanf(" %c",&choice);
		printf("\nyour choice : %c \n", choice);
		switch(choice)
		{
			case '1': printf("\nInsert an element\n");
				printf("Enter the element to be entered : ");
				scanf("%d",&element);
				printf("Enter the position to be entered at : ");		
				scanf("%d",&position);
				insertInArray(array, element, position);
				break;

			case '2': printf("\nDelete an element. \n");
				deleteInArray(array);
				break;

			case '3': printf("\nPerform Linear Search on the Array.\n");
				printf("\nEnter element to be searched: ");
				scanf("%d",&element);
				linearSearch(array, element);
				break;

			case '4': printf("\nPerform Binary Search on the Array. \n");
				printf("\nEnter Element");
				scanf("%d",&element);		
				binarySearch(array, 0, size - 1, element);
				break;
		
			case '5': printf("\nArray will be sorted by Selection Sort.\n");
				selectionSort(array);
				break;

			case '6': printf("\nArray will be sorted by Bubble Sort.\n");
				bubbleSort(array);
				break;
		
			case '7': printf("\nThe current array is:\n");
				displayAll(array);
				break;
			
			default:	 printf("\nInvalid input.");

		}
		fflush(stdin);
		printf("\n\nEnter any number to view chocices again, enter 0 to quit: ");
		scanf(" %d",&option);
	}
	return 0;
}
