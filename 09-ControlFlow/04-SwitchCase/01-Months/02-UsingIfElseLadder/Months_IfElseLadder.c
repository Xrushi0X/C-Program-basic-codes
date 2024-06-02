
#include<stdio.h>
int main(void)
{
	//variable dec
	int rlk_num_month;
	//code

	printf("\n\n");

	printf("Enter Number Of Month (1 to 12) :");
	scanf("%d", &rlk_num_month);

	printf("\n\n");
	
	if (rlk_num_month == 1)
		printf("Month Number %d Is January !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 2)
		printf("Month Number %d Is February !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 3)
		printf("Month Number %d Is March !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 4)
		printf("Month Number %d Is April !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 5)
		printf("Month Number %d Is May !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 6)
		printf("Month Number %d Is June !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 7)
		printf("Month Number %d Is July !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 8)
		printf("Month Number %d Is August !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 9)
		printf("Month Number %d Is September !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 10)
		printf("Month Number %d Is October !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 11)
		printf("Month Number %d Is November !!!\n\n", rlk_num_month);

	else if (rlk_num_month == 12)
		printf("Month Number %d Is December !!!\n\n", rlk_num_month);

	else
		printf("Invalid Month Number %d Entered !!!! Please Try Again\n\n", rlk_num_month);



	printf("If -Else if - ELSE LADDER Complete !!!! \n\n ");
	return(0);
	
}
