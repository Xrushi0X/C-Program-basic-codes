#include <stdio.h>
#define MAX_NUMBER(a, b) ((a > b) ? a : b)

int main(int argc, char* argv[], char* envp[])
{
	// variable declarations
	
	int rlk_iNum_01;
	int rlk_iNum_02;
	int rlk_iResult;

	float rlk_fNum_01;
	float rlk_fNum_02;
	float rlk_fResult;
	
	printf("\n\n");
	printf("Enter An Integer Number : \n\n");
	scanf("%d", &rlk_iNum_01);

	printf("\n\n");
	printf("Enter Another Integer Number : \n\n");
	scanf("%d", &rlk_iNum_02);
	rlk_iResult = MAX_NUMBER(rlk_iNum_01, rlk_iNum_02);
	printf("\n\n");
	printf("Result Of Macro Function MAX_NUMBER() = %d\n", rlk_iResult);

	printf("\n\n");
	
	printf("\n\n");
	printf("Enter A Floating Point Number : \n\n");
	scanf("%f", &rlk_fNum_01);

	printf("\n\n");
	printf("Enter Another Floating Point Number : \n\n");
	scanf("%f", &rlk_fNum_02);
	rlk_fResult = MAX_NUMBER(rlk_fNum_01, rlk_fNum_02);
	printf("\n\n");
	printf("Result Of Macro Function MAX_NUMBER() = %f\n", rlk_fResult);

	printf("\n\n");
	return(0);
}