#include<stdio.h>
int main(void)
{
	//variable
	int num;

	//code

	printf("\n\n");

	printf("Enter Value For 'num' :");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("Num = %d Is Less Than 0(NEGATIVE).\n\n", num);
	}
	if (num < 0)
	{
		printf("NUM= %d IS LESS THAN 0(NEGATIVE).\n\n", num);
	}
	if ((num > 0) && (num <= 100))
	{
		printf("Num = %d IS BETWEEN 0 AND 100.\n\n", num);

	}
	if ((num > 100) && (num <= 200))
	{
		printf("Num = %d Is between 100 AND 200.\n\n", num);
	}

	if ((num > 200) && (num <= 300))
	{
		printf("Num = %d Is Between 200 And 300.\n\n ", num);
	}
	if (num > 500)
	{
		printf("Num = %d IS greater Than 500.\n\n ", num);

	}

	return(0);
}

