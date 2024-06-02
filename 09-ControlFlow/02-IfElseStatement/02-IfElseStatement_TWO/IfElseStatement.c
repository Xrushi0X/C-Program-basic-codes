#include<stdio.h>
int main(void)
{
	//variable dec
	int age;

	//code
	printf("\n\n");
	printf("Enter Age : ");
	scanf("%d", &age);
	printf("\n\n");
	if (age >= 18)
	{
		printf("Enter if-block...\n\n");
		printf("You are Eligible For Voting !!!\n\n");

	}
	else
	{
		printf("Entering Else-block...\n\n");
		printf("You Are NOT Eligible For Voting !!! \n\n");

	}
	printf("BYE !!!\n\n");
	return(0);
}
