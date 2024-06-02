#include <stdio.h>
#include <stdlib.h>
#define INT_SIZE sizeof(int)
#define FLOAT_SIZE sizeof(float)
#define DOUBLE_SIZE sizeof(double)
#define CHAR_SIZE sizeof(char)
int main(void)
{
	//variable declarations
	int* rlk_ptr_iArray = NULL;
	unsigned int rlk_intArrayLength = 0;
	float* rlk_ptr_fArray = NULL;
	unsigned int rlk_floatArrayLength = 0;
	double* rlk_ptr_dArray = NULL;
	unsigned int rlk_doubleArrayLength = 0;
	char* rlk_ptr_cArray = NULL;
	unsigned int rlk_charArrayLength = 0;
	int rlk_i;
	//code
	// ****** INTEGER ARRAY *******
	
	printf("\n\n");
	
	printf("Enter The Number Of Elements You Want In The Integer Array : ");
	
	scanf("%u", &rlk_intArrayLength);
	
	rlk_ptr_iArray = (int*)malloc(INT_SIZE * rlk_intArrayLength);
	
	if (rlk_ptr_iArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY FAILED !!! EXITTING NOW...\n\n");
			exit(0);
	}
	
	
	else
	{
		
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY SUCCEEDED !!!\n\n");
	}
	
	printf("\n\n");
	printf("Enter The %d Integer Elements To Fill Up The Integer Array : \n\n", rlk_intArrayLength);
		for (rlk_i = 0; rlk_i < rlk_intArrayLength; rlk_i++)
			scanf("%d", (rlk_ptr_iArray + rlk_i));


	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The 'float' Array : ");
	scanf("%u", &rlk_floatArrayLength);
	rlk_ptr_fArray = (float*)malloc(FLOAT_SIZE * rlk_floatArrayLength);
	if (rlk_ptr_fArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY FAILED !!! EXITTING NOW...\n\n");
			exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY SUCCEEDED !!!\n\n");
	}
	printf("\n\n");
	printf("Enter The %d Floating-Point Elements To Fill Up The 'float'Array : \n\n", rlk_floatArrayLength);
		for (rlk_i = 0; rlk_i < rlk_floatArrayLength; rlk_i++)
			scanf("%f", (rlk_ptr_fArray + rlk_i));
	
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The 'double' Array : ");
	scanf("%u", &rlk_doubleArrayLength);
	rlk_ptr_dArray = (double*)malloc(DOUBLE_SIZE * rlk_doubleArrayLength);
	if (rlk_ptr_dArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY FAILED !!! EXITTING NOW...\n\n");
			exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY SUCCEEDED !!!\n\n");
	}
	printf("\n\n");
	printf("Enter The %d Double Elements To Fill Up The 'double' Array : \n\n", rlk_doubleArrayLength);
		
		for (rlk_i = 0; rlk_i < rlk_doubleArrayLength; rlk_i++)
			scanf("%lf", (rlk_ptr_dArray + rlk_i));
	
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The Character Array : ");
	scanf("%u", &rlk_charArrayLength);
	rlk_ptr_cArray = (char*)malloc(CHAR_SIZE * rlk_charArrayLength);
	if (rlk_ptr_cArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHARACTER ARRAY FAILED !!! EXITTINGNOW...\n\n");
			exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHARACTER ARRAY SUCCEEDED !!!\n\n");
	}
	printf("\n\n");
	printf("Enter The %d Character Elements To Fill Up The Character Array :\n\n", rlk_charArrayLength);
	
	for (rlk_i = 0; rlk_i < rlk_charArrayLength; rlk_i++)
		{
			*(rlk_ptr_cArray + rlk_i) = getch();
			printf("%c\n", *(rlk_ptr_cArray + rlk_i));
		}

	printf("\n\n");
	printf("The Integer Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", rlk_intArrayLength);
		for (rlk_i = 0; rlk_i < rlk_intArrayLength; rlk_i++)
			printf(" %d \t \t At Address : %p\n", *(rlk_ptr_iArray + rlk_i), (rlk_ptr_iArray + rlk_i));

	printf("\n\n");
	printf("The Float Array Entered By You And Consisting Of %d Elements Is AsFollows : \n\n", rlk_floatArrayLength);
		for (rlk_i = 0; rlk_i < rlk_floatArrayLength; rlk_i++)
			printf(" %f \t \t At Address : %p\n", *(rlk_ptr_fArray + rlk_i), (rlk_ptr_fArray + rlk_i));

	printf("\n\n");
	printf("The Double Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", rlk_doubleArrayLength);
		for (rlk_i = 0; rlk_i < rlk_doubleArrayLength; rlk_i++)
			printf(" %lf \t \t At Address : %p\n", *(rlk_ptr_dArray + rlk_i), (rlk_ptr_dArray+ rlk_i));

	printf("\n\n");
	printf("The Character Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", rlk_charArrayLength);
		for (rlk_i = 0; rlk_i < rlk_charArrayLength; rlk_i++)
			printf(" %c \t \t At Address : %p\n", *(rlk_ptr_cArray + rlk_i), (rlk_ptr_cArray + rlk_i));
	
		if (rlk_ptr_cArray)
		{
			free(rlk_ptr_cArray);
			rlk_ptr_cArray = NULL;
			printf("\n\n");
			printf("MEMORY OCCUPIED BY CHARACTER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
		}
	if (rlk_ptr_dArray)
	{
		free(rlk_ptr_dArray);
		rlk_ptr_dArray = NULL;
		printf("\n\n");
		printf("MEMORY OCCUPIED BY 'DOUBLE' ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (rlk_ptr_fArray)
	{
		free(rlk_ptr_fArray);
		rlk_ptr_fArray = NULL;
		printf("\n\n");
		printf("MEMORY OCCUPIED BY FLOATING-POINT ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (rlk_ptr_iArray)
	{
		free(rlk_ptr_iArray);
		rlk_ptr_iArray = NULL;
		printf("\n\n");
		printf("MEMORY OCCUPIED BY INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}
