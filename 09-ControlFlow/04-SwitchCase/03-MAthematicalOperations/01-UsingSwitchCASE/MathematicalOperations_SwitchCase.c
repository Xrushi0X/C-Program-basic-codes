#include <stdio.h> 
#include <conio.h> 
int main(void)
	{

	int rlk_a, rlk_b;
	int rlk_result;
	char option, option_division;
	
	
	//code
		printf("\n\n");

		printf("Enter Value For 'A' : ");
		scanf("%d", &rlk_a);
		printf("Enter Value For 'B' : ");
		scanf("%d", &rlk_b);
		printf("Enter Option In Character : \n\n");
		printf("'A' or 'a' For Addition : \n");
		printf("'S' or 's' For Subtraction : \n");
		printf("'M' or 'm' For Multiplication : \n");
		printf("'D' or 'd' For Division : \n\n");
		printf("Enter Option : ");
		option = getch();
		printf("\n\n");


switch (option)
	{
		case 'A':
		case 'a':
		rlk_result = rlk_a + rlk_b;
		printf("Addition Of A = %d And B = %d Gives Result %d !!!\n\n", rlk_a, rlk_b,rlk_result);
		break;
		
		case 'S':
		case 's':
		if (rlk_a >= rlk_b)
		{
			rlk_result = rlk_a - rlk_b;
			printf("Subtraction Of B = %d From A = %d Gives Result %d !!!\n\n",rlk_b, rlk_a, rlk_result);
		}
		else
		{

			rlk_result = rlk_b - rlk_a;
			printf("Subtraction Of A = %d From B = %d Gives Result %d !!!\n\n",rlk_a, rlk_b, rlk_result);
		}
		break;
		
		case 'M':
		case 'm':
			rlk_result = rlk_a * rlk_b;
		printf("Multiplication Of A = %d And B = %d Gives Result %d !!!\n\n", rlk_a,rlk_b, rlk_result);
		break;
		
		case 'D':
		case 'd':
				printf("Enter Option In Character : \n\n");
				printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
				printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");
				printf("Enter Option : ");
				option_division = getch();
				printf("\n\n");
		switch (option_division)
		{
		
		case 'Q':
		case 'q':
		case '/':
		if (rlk_a >=rlk_b)
		{
		rlk_result = rlk_a /rlk_b;
		printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", rlk_a, rlk_b, rlk_result);
		}
		else
		{
		rlk_result = rlk_b / rlk_a;
		printf("Division Of B = %d By A = %d Gives Quotient = %d !!!\n\n", rlk_b, rlk_a, rlk_result);
		}
		break; 
		
		case 'R':
		case 'r':
		case '%':
		if (rlk_a >= rlk_b)
		{
				rlk_result = rlk_a % rlk_b;
				printf("Division Of A = %d By B = %d Gives Remainder = %d !!!\n\n", rlk_a, rlk_b, rlk_result);
		}
		else
		{
			rlk_result = rlk_b % rlk_a;
			printf("Division Of B = %d By A = %d Gives Remainder = %d !!!\n\n", rlk_b, rlk_a, rlk_result);
		}
		break; 
		default: 
		printf("Invalid Character %c Entered For Division !!! Please TryAgain...\n\n", option_division);

		break;
		} 
		break; 
		default:
		printf("Invalid Character %c Entered !!! Please Try Again...\n\n",option);
		break;
		} 
		printf("Switch Case Block Complete !!!\n");
		return(0);
}