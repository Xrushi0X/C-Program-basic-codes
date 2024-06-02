#include <stdio.h>

int main(void)
{
	
	//variable declarations
	
	char rlk_option, rlk_ch = '\0';
	
	//code
	
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The InfiniteFor Loop : \n\n");
		
		printf("Enter 'Y' oy 'y' To Initiate User Controlled Infinite Loop : ");
		printf("\n\n");
	
	rlk_option = getch();
	
	if (rlk_option == 'Y' || rlk_option == 'y')
	{
		
		while (1) 
		{
			
			printf("In Loop...\n");
			
			rlk_ch = getch();
			
			if (rlk_ch == 'Q' || rlk_ch == 'q')
				
				break; 
		}
		
		printf("\n\n");
		
		printf("EXITTING USER CONTROLLED INFINITE LOOP........");
		
		printf("\n\n");
	
	}
	
	else
		
		printf("You Must Press 'Y' or 'y' To Initiate The User Controlled InfiniteLoop------Please Try Again------\n\n");
			

			return(0);

}


