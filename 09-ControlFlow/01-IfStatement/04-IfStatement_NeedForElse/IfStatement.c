#include<stdio.h>
int main(void)
{
	//variable dec
	int age;


	//code
	printf("\n\n");
	printf("Enter Age : ");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("You are Eligible For Voting !!!\n\n\n");
	}
	printf("You Are NOT Eligible For Voting !!!!!\n\n\n");
	return(0);

}
