#include <stdio.h>
int main(void)
{
	//variable declarations
	
	char rlk_option, rlk_ch = '\0';
	
	
	//code
	
	printf("\n\n");
	
	
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The INFINITE for Loop : \n\n");
		
	printf("Enter 'Y' oy 'y' To Initiate User Controlled Infinite Loop : ");
	
	
	printf("\n\n");
	
	
	rlk_option = getch();
	
	
	if (rlk_option == 'Y' || rlk_option == 'y')
	
	{
	
	for (;;) 
	
	{
			printf("In Loop...\n");

			rlk_ch = getch();

			if (rlk_ch == 'Q' || rlk_ch == 'q')
				break; 

	}
	}

	printf("\n\n");

	printf("EXITTING USER CONTROLLED INFINITE LOOP !!!!");

	printf("\n\n");

	return(0);


}