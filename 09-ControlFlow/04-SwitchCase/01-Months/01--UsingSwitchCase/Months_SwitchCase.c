#include<stdio.h>
int main(void)
{
	//variable Decl
	int rlk_num_month;

	//code
	printf("Enter Number Of Month Of Month (1 to 12) : ");
	scanf("%d", &rlk_num_month);

	printf("\n\n");

	switch (rlk_num_month)
	{
	case 1: // like 'if'
		printf("Month number %d Is JANUARY !!! \n\n", rlk_num_month);
		break;

		case 2:
			printf("Month number %d Is FEBRUARY !!! \n\n", rlk_num_month);
			break;

		case 3:
			printf("Month number %d Is MARCH !!! \n\n", rlk_num_month);
			break;
		
		case 4:
			printf("Month number %d Is APRIL !!! \n\n", rlk_num_month);
			break;

		case 5:
			printf("Month number %d Is MAY!!! \n\n", rlk_num_month);
			break;

		case 6:
			printf("Month number %d Is JUNE !!! \n\n", rlk_num_month);
			break;

		case 7:
			printf("Month number %d Is JULY !!! \n\n", rlk_num_month);
			break;

		case 8:
			printf("Month number %d Is AUGUST !!! \n\n", rlk_num_month);
			break;

		case 9:
			printf("Month number %d Is SEPTEMBER !!! \n\n", rlk_num_month);
			break;
		
		case 10:
			printf("Month number %d Is OCTOMBER !!! \n\n", rlk_num_month);
			break;

		case 11:
			printf("Month number %d Is NOVEMBER !!! \n\n", rlk_num_month);
			break;

		case 12:
			printf("Month number %d Is DECEMBER !!! \n\n", rlk_num_month);
			break;


		default: 
			printf("Month Number %d IS Entered !!!! Please Try Again...\n\n", rlk_num_month);
			break;


	}
	printf("switch Case Block Complete !!!\n");
	return(0);
}

