#include <stdio.h>
int main(void)
{
	//variable declarations
	char rlk_option, rlk_ch = '\0';
	
	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The InfiniteFor Loop : \n\n");
		do
		{
			do
			{
				printf("\n");
				printf("In Loop...\n");
				rlk_ch = getch(); //control flow waits for character input...
			} while (rlk_ch != 'Q' && rlk_ch != 'q');
			
			printf("\n\n");
			printf("EXITTING USER CONTROLLED INFINITE LOOP...");
			
			printf("\n\n");
			printf("DO YOU WANT TO BEGIN USER CONTROLLED INFINITE LOOP AGAIN?...(Y/y -Yes, Any Other Key - No) : ");
			rlk_option = getch();
		}
		
		while (rlk_option == 'Y' || rlk_option == 'y');
		return(0);
}
