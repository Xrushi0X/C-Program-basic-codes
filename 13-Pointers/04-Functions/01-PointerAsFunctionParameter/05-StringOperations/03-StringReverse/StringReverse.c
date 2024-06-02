#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
	//function prototype
	void MyStrrev(char*, char*);
	int MyStrlen(char*);
	//variable declarations
	char* rlk_chArray_Original = NULL, * rlk_chArray_Reversed = NULL;
		int rlk_original_string_length;
	//code
	
	printf("\n\n");
	rlk_chArray_Original = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (rlk_chArray_Original == NULL)
	{
		printf("MEMORY ALLOCATION FOR ORIGINAL STRING FAILED !!! EXITTING NOW ...\n\n");
			exit(0);
	}
	printf("Enter A String : \n\n");
	gets_s(rlk_chArray_Original, MAX_STRING_LENGTH);

	rlk_original_string_length = MyStrlen(rlk_chArray_Original);
	rlk_chArray_Reversed = (char*)malloc(rlk_original_string_length * sizeof(char));
	if (rlk_chArray_Reversed == NULL)
	{
		printf("MEMORY ALLOCATION FOR REVERSED STRING FAILED !!! EXITTING NOW ...\n\n");
			exit(0);
	}
	MyStrrev(rlk_chArray_Reversed, rlk_chArray_Original);
	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'chArray_Original[]') Is : \n\n");
	printf("%s\n", rlk_chArray_Original);
	printf("\n\n");
	printf("The Reversed String (i.e : 'chArray_Reversed[]') Is : \n\n");
	printf("%s\n", rlk_chArray_Reversed);
	if (rlk_chArray_Reversed)
	{
		free(rlk_chArray_Reversed);
		rlk_chArray_Reversed = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO REVERSED STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (rlk_chArray_Original)
	{
		free(rlk_chArray_Original);
		rlk_chArray_Original = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO ORIGINAL STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}
void MyStrrev(char* rlk_str_destination, char* rlk_str_source)
{
	//function prototype
	int MyStrlen(char*);
	//variable declarations
	int rlk_iStringLength = 0;
	int rlk_i, rlk_j, rlk_len;
	//code
	rlk_iStringLength = MyStrlen(rlk_str_source);
	
	rlk_len = rlk_iStringLength - 1;
	

		for (rlk_i = 0, rlk_j = rlk_len; rlk_i < rlk_iStringLength, rlk_j >= 0; rlk_i++, rlk_j--)
		{
			*(rlk_str_destination + rlk_i) = *(rlk_str_source + rlk_j);
		}
	*(rlk_str_destination + rlk_i) = '\0';
}
int MyStrlen(char* str)
{
	//variable declarations
	int rlk_j;
	int rlk_string_length = 0;
	//code
	
		for (rlk_j = 0; rlk_j < MAX_STRING_LENGTH; rlk_j++)
		{
			if
				(str[rlk_j] == '\0')
				break;
			else
				rlk_string_length++;
		}
	return(rlk_string_length);
}

