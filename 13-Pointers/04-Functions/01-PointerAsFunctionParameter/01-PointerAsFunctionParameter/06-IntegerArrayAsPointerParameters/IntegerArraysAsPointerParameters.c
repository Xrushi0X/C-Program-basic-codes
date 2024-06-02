#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//function declarations
	void MultiplyArrayElementsByNumber(int*, int, int);
	//variable declaration
	
	int* rlk_iArray = NULL;
	int rlk_num_elements;
	int rlk_i, rlk_num;
	
	//code
	printf("\n\n");
	printf("Enter How Many Elements You Want In The Integer Array : ");
	scanf("%d", &rlk_num_elements);
	rlk_iArray = (int*)malloc(rlk_num_elements * sizeof(int));
	if (rlk_iArray == NULL)
	{
		printf("MEMORY ALLOCATION TO 'iArray' HAS FAILED !!! EXITTING NOW...\n\n");
			exit(0);
	}
	printf("\n\n");
	printf("Enter %d Elements For The Integer Array : \n\n", rlk_num_elements);
	for (rlk_i = 0; rlk_i < rlk_num_elements; rlk_i++)
		scanf("%d", &rlk_iArray[rlk_i]);
	// ****** ONE ******
	printf("\n\n");
	printf("Array Before Passing To Function MultiplyArrayElementsByNumber() :\n\n");
		for (rlk_i = 0; rlk_i < rlk_num_elements; rlk_i++)
			
	printf("iArray[%d] = %d\n", rlk_i, rlk_iArray[rlk_i]);
	printf("\n\n");
	
		printf("Enter The Number By Which You Want To Multiply Each Array Element :");
	
	scanf("%d", &rlk_num);
	MultiplyArrayElementsByNumber(rlk_iArray, rlk_num_elements, rlk_num);
	printf("\n\n");
	printf("Array Returned By Function MultiplyArrayElementsByNumber() : \n\n");
		for (rlk_i = 0; rlk_i < rlk_num_elements; rlk_i++)
			printf("iArray[%d] = %d\n", rlk_i, rlk_iArray[rlk_i]);
	if (rlk_iArray)
	{
		free(rlk_iArray);
		rlk_iArray = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO 'iArray' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}
void MultiplyArrayElementsByNumber(int* arr, int iNumElements, int n)
{
	//variable declarations
	int rlk_i;
	//code
	for (rlk_i = 0; rlk_i < iNumElements; rlk_i++)
		arr[rlk_i] = arr[rlk_i] * n;
}