#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
	//function prototype
	void MyStrcpy(char*, char*);
	int MyStrlen(char*);
	
	//variable declarations
	
	char* rlk_chArray_Original = NULL, * rlk_chArray_Copy = NULL;
		
		int rlk_original_string_length;
	//code

	printf("\n\n");
	rlk_chArray_Original = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (rlk_chArray_Original == NULL)
	{
		printf("MEMORY ALLOCATION FOR ORIGINAL STRING FAILED !!! EXITTING NOW...\n\n");
			exit(0);
	}
	printf("Enter A String : \n\n");
	gets_s(rlk_chArray_Original, MAX_STRING_LENGTH);
	rlk_original_string_length = MyStrlen(rlk_chArray_Original);
	rlk_chArray_Copy = (char*)malloc(rlk_original_string_length * sizeof(char));
	if (rlk_chArray_Copy == NULL)
	{
		printf("MEMORY ALLOCATION FOR COPIED STRING FAILED !!! EXITTING NOW...\n\n");
			exit(0);
	}

	MyStrcpy(rlk_chArray_Copy, rlk_chArray_Original);
	
	printf("\n\n");
    
	printf("The Original String Entered By You (i.e : 'chArray_Original') Is :	\n\n");
		
		
	printf("%s\n", rlk_chArray_Original);
	printf("\n\n");
	printf("The Copied String (i.e : 'chArray_Copy') Is : \n\n");
	printf("%s\n", rlk_chArray_Copy);
	if (rlk_chArray_Copy)
	{
		free(rlk_chArray_Copy);
		rlk_chArray_Copy = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR COPIED STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (rlk_chArray_Original)
	{
		free(rlk_chArray_Original);
		rlk_chArray_Original = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED FOR ORIGINAL STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}
void MyStrcpy(char* str_destination, char* str_source)
{
	//function prototype
	int MyStrlen(char*);
	
	
	//variable declarations
	int rlk_iStringLength = 0;
	int rlk_j;
	
	
	//code
	rlk_iStringLength = MyStrlen(str_source);
	for (rlk_j = 0; rlk_j < rlk_iStringLength; rlk_j++)
		*(str_destination + rlk_j) = *(str_source + rlk_j);
	*(str_destination + rlk_j) = '\0';
}
	int MyStrlen(char* str)
{
	//variable declarations
	int rlk_j;
	
	int rlk_string_length = 0;
	
	
	//code
	
		for (rlk_j = 0; rlk_j < MAX_STRING_LENGTH; rlk_j++)
		{
			if (str[rlk_j] == '\0')
				break;
			else
				rlk_string_length++;
		}
	return(rlk_string_length);
}
