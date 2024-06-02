#include<stdio.h>
int main(void)
{
	//variale Declaration
	int rlk_num;

	//code
	printf("\n\n");

	printf("Enter Value For 'num' : ");
	scanf("%d", &rlk_num);

	if (rlk_num < 0)
		printf("Num = %d Is Less Than 0 (Negative) !!!\n\n\n", rlk_num);


	else if ((rlk_num > 0) && (rlk_num <= 100))
		printf("Num = %d Is Between 0 And 100 !!! \n\n", rlk_num);


	else if ((rlk_num > 100) && (rlk_num <= 200))
		printf("Num = %d Is Between 100 And 200 !!! \n\n", rlk_num);


	else if ((rlk_num > 200) && (rlk_num <= 300))
		printf("Num = %d Is Between 200 And 300 !!! \n\n", rlk_num);


	else if ((rlk_num > 300) && (rlk_num <= 400))
		printf("Num = %d Is Between 300 And 400 !!! \n\n", rlk_num);


	else if ((rlk_num > 400) && (rlk_num <= 500))
		printf("Num = %d Is Between 400 And 500 !!! \n\n", rlk_num);


	else if (rlk_num > 500)
		printf("Num = %d Is Greater Than 500 !!! \n\n", rlk_num);

	else
		printf("Invalid Value Entered !!!\n\n");

	return(0);

}