#include <stdio.h>
#include <string.h> // for toupper()
int main(void)
{
	{
		// variable declarations
		char ch, ch_i;
		unsigned int ascii_ch = 0;

		// code
		printf("\n\n");
		printf("Enter The First Character of First Name : ");
		ch = getch();
		ch = toupper(ch);
		for (ch_i = 'A'; ch_i <= 'Z'; ch_i++)
		{
			if (ch == ch_i)
			{
				ascii_ch = (unsigned int)ch;
				goto result_output;

			}
		}
		printf("\n\n");
		printf("Goto statement not executed, so printing \"Hello, world \n");

	result_output:
		printf("\n\n");
		if (ascii_ch == 0)
		{
			printf("You must have a strange name! Could not find the character '%c' in the entire English Alphabet1\n", ch);
		}
		else
		{
			printf("Character '%c found. It has ASCII value Xu.\n", ch, ascii_ch);
		}
		printf("\n\n");
		return(0);
	}

}
