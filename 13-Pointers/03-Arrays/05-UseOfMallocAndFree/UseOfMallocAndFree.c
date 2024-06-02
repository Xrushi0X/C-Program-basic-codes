#include <stdio.h>
#include <stdlib.h> 
int main(void)
{
	//variable declarations
	int* rlk_ptr_iArray = NULL; 
	unsigned int intArrayLength = 0;
	int rlk_i;
	//code
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In Your Integer Array : ");
	scanf("%d", &intArrayLength);
	
	rlk_ptr_iArray = (int*)malloc(sizeof(int) * intArrayLength);
	if (rlk_ptr_iArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS FAILED !!! EXIT NOW...\n\n");
			exit(0);
	}
	
	else {
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS SUCCEEDED !!!\n\n");
		printf("MEMORY ADDRESSES FROM %p TO %p HAVE BEEN ALLOCATED TO INTEGERARRAY !!!\n\n", rlk_ptr_iArray, (rlk_ptr_iArray + (intArrayLength - 1)));
	}
	
	
	printf("\n\n");
	printf("Enter %d Elements For The Integer Array : \n\n", intArrayLength);
	for (rlk_i = 0; rlk_i < intArrayLength; rlk_i++)
		
		scanf("%d", (rlk_ptr_iArray + rlk_i));
	printf("\n\n");
	printf("The Integer Array Entered By You, Consisting Of %d Elements : \n\n", intArrayLength);
	
	
	for (rlk_i = 0; rlk_i < intArrayLength; rlk_i++)
	{
		printf("ptr_iArray[%d] = %d \t \t At Address &ptr_iArray[%d] : %p\n", rlk_i, rlk_ptr_iArray[rlk_i], rlk_i, &rlk_ptr_iArray[rlk_i]);
	}
	printf("\n\n");
	for (rlk_i = 0; rlk_i < intArrayLength; rlk_i++)
	{
		printf("*(ptr_iArray + %d) = %d \t \t At Address (ptr_iArray + %d) : %p\n", rlk_i, *(rlk_ptr_iArray + rlk_i), rlk_i, (rlk_ptr_iArray + rlk_i));
	}
	
		if (rlk_ptr_iArray)
		{
			free(rlk_ptr_iArray);
			rlk_ptr_iArray = NULL;
			printf("\n\n");
			printf("MEMORY ALLOCATED FOR INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
		}
	return(0);
}
