#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
	//function prototype
	
	int MyStrlen(char*);
	
	//variable declarations
	
	char* rlk_chArray = NULL; 

		
	int rlk_iStringLength = 0;
	//code
	printf("\n\n");
	rlk_chArray = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (rlk_chArray == NULL)
	{
		printf("MEMORY ALOCATION TO CHARACTER ARRAY FAILED !!! EXITTING NOW...\n\n");
			exit(0);
	}
	
	printf("Enter A String : \n\n");
	gets_s(rlk_chArray, MAX_STRING_LENGTH);
	
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", rlk_chArray);
	
	printf("\n\n");
	rlk_iStringLength = MyStrlen(rlk_chArray);
	printf("Length Of String Is = %d Characters !!!\n\n", rlk_iStringLength);
	if (rlk_chArray)
	{
		free(rlk_chArray);
		rlk_chArray = NULL;
	}
	return(0);
}
int MyStrlen(char* rlk_str)
{
	//variable declarations
	int rlk_j;
	int rlk_string_length = 0;
	for (rlk_j = 0; rlk_j < MAX_STRING_LENGTH; rlk_j++) 
	{
		if (*(rlk_str + rlk_j) == '\0')
			break;
		else
			rlk_string_length++;
	}
	return(rlk_string_length);
}

