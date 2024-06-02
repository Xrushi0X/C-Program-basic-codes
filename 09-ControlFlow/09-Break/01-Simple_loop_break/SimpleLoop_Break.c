#include <stdio.h>

#include <conio.h>

int main(void)

{
	
	//variable declarations
	
	int rlk_i;
	
	char rlk_ch;
	
	//code
	
	
	printf("\n\n");
	printf("Printing Even Numbers From 1 to 100 For Every User Input. Exitting theLoop When User Enters Character 'Q' or 'q' : \n\n");
	
	
	printf("Enter Character 'Q' or 'q' To Exit Loop : \n\n");
	
	for (rlk_i = 1; rlk_i <= 100; rlk_i++)
	{
		
		printf("\t%d\n", rlk_i);
		
		rlk_ch = getch();
		
		if (rlk_ch == 'Q' || rlk_ch == 'q')
		
		{
		
			break;
		
		}
	
	}
	
	printf("\n\n");
	
	printf("EXITTING loop........");
	
	printf("\n\n");
	
	return(0);

}