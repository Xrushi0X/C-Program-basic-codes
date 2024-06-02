#include<stdio.h>
int main(void)
{
	//variable
	int num;

	//code
	printf("Enter Value For 'num' : ");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("NUm = %d Is Less Than 0 (Negative) !!!\n\n", num);

	}
	else
	{
		if ((num > 0) && (num <= 100))
		{
			printf("NUM = %d Is between 0 AND 100 !!!\n\n", num); 

		}
		else //else 2
		{
			if ((num > 100) && (num <= 200))
			{
				printf("Num = %d Is between 100 and 200 !!! \n\n", num);

			}
			else //else 3
			{
				if ((num > 200) && (num <= 300))
				{
					printf("Num = %d Is between 200 And 300 !!!\n\n", num);

				}
				else // else 4
				{
					if ((num > 300) && (num <= 400))
					{
						printf("Num = %d Is between 300 And 400 !!! \n\n", num);
					}
					else //else 5
					{
						if((num > 400) && (num <= 500))
						{
							printf("Num = %d Between 400 And 500 !!!\n\n ", num);
						}
						else//else 6

						{
							printf("Num %d Is greater Than 500 !!!\n\n", num);

						}
					}

				}
			}
		}
	}
	return(0);
}

