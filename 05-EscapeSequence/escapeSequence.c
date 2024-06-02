#include<stdio.h>
int main(void)
{
	//code
	printf("\n\n");
	printf("Going on to next line...Using \\n Escape Sequence\n\n");
	printf("Demonstrating \t Horizontal \t Tab \t Using \t \\t Escape Sequence !!!\n\n");
	printf("\"this is double Quoted Output\" Done Using \\\"\\\" Escape Sequence\n\n");
	printf("\'This is a Single Quoted Output\'DOne USing\\\'\\\' Escape Sequqnce\n\n");
	printf("BACKSAPACE Turned To BACKSPACE\b Using Escape Sequence \\b\n\n");

	printf("\r Demonstrating Carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating \r Carriage Return Using \\r Escape Sequencq\n");
	printf("Demonstranting Carriage \r Return Ushing \\r Escape Sequence\n\n");

	printf("DEMONSTRATING \x41 Using \\xhh Escape Sequence\n\n");
	printf("DEMONSTrATING \102 Using \\ooo Escape Sequence\n\n");
	return(0);


}

