#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
	//function declarations
	char* ReplaceVowelsWithHashSymbol(char*);
	
	//variable declaration
	char rlk_string[MAX_STRING_LENGTH];
	char* rlk_replaced_string = NULL;
	
	//code
	printf("\n\n");
	printf("Enter String : ");
	gets_s(rlk_string, MAX_STRING_LENGTH);
	rlk_replaced_string = ReplaceVowelsWithHashSymbol(rlk_string);
	if (rlk_replaced_string == NULL)
	{
		printf("ReplaceVowelsWithHashSymbol() Function Has Failed !!! Exitiing Now...\n\n");
			exit(0);
	}
	printf("\n\n");
	printf("Replaced String Is : \n\n");
	printf("%s\n\n", rlk_replaced_string);
	if (rlk_replaced_string)
	{
		free(rlk_replaced_string);
		rlk_replaced_string = NULL;
	}
	return(0);
}
char* ReplaceVowelsWithHashSymbol(char* s)
{
	//function prototype
	void MyStrcpy(char*, char*);
	int MyStrlen(char*);
	//varibale declarations
	char* rlk_new_string = NULL;
	int rlk_i;
	//code
	rlk_new_string = (char*)malloc(MyStrlen(s) * sizeof(char));
	if (rlk_new_string == NULL)
	{
		printf("COULD NOT ALLOCATE MEMORY FOR NEW STRING !!!\n\n");
		return(NULL);
	}
	MyStrcpy(rlk_new_string, s);
	for (rlk_i = 0; rlk_i < MyStrlen(rlk_new_string); rlk_i++)
	{
		switch (rlk_new_string[rlk_i])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			rlk_new_string[rlk_i] = '#';
			break;
		default:
			break;
		}
	}
	return(rlk_new_string);
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

	