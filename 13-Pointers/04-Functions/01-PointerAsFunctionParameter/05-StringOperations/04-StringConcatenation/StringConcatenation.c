#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
	//function prototype
	void MyStrcat(char*, char*);
	int MyStrlen(char*);
	//variable declarations

	char* rlk_chArray_One = NULL, * rlk_chArray_Two = NULL;
		
		
	//code
		
	printf("\n\n");

	rlk_chArray_One = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (rlk_chArray_One == NULL)
	{
		printf("MEMORY ALLOCATION TO FIRST STRING FAILED !!! EXITTING NOW...\n\n");
			exit(0);
	}
	printf("Enter First String : \n\n");
	gets_s(rlk_chArray_One, MAX_STRING_LENGTH);
	printf("\n\n");
	rlk_chArray_Two = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	
	
	if (rlk_chArray_Two == NULL)
	{
		printf("MEMORY ALLOCATION TO SEOND STRING FAILED !!! EXITTING NOW...\n \n");
			exit(0);
	}
	printf("Enter Second String : \n\n");
	gets_s(rlk_chArray_Two, MAX_STRING_LENGTH);

	printf("\n\n");
	
	
	printf("****** BEFORE CONCATENATION ******");
	
	
	printf("\n\n");
	printf("The Original First String Entered By You (i.e : 'chArray_One[]')nIs : \n\n");
      
	  printf("%s\n", rlk_chArray_One);
	
	printf("\n\n");
	
	printf("The Original Second String Entered By You (i.e : 'chArray_Two[]') Is : \n\n");
	
	printf("%s\n", rlk_chArray_Two);
	
	MyStrcat(rlk_chArray_One, rlk_chArray_Two);
	
	printf("\n\n");
	
	printf("****** AFTER CONCATENATION ******");
	
	printf("\n\n");
	
	printf("'chArray_One[]' Is : \n\n");
	
	printf("%s\n", rlk_chArray_One);
	
	printf("\n\n");
	
	
	
	printf("'chArray_Two[]' Is : \n\n");
	printf("%s\n", rlk_chArray_Two);
	if (rlk_chArray_Two)
	{
		free(rlk_chArray_Two);
		rlk_chArray_Two = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO SECOND STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	if (rlk_chArray_One)
	{
		free(rlk_chArray_One);
		rlk_chArray_One = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO FIRST STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}
void MyStrcat(char* str_destination, char* str_source)
{

	int MyStrlen(char*);
	//variable declarations
	int rlk_iStringLength_Source = 0, rlk_iStringLength_Destination = 0;
	int rlk_i, rlk_j;
	//code
	rlk_iStringLength_Source = MyStrlen(str_source);
	rlk_iStringLength_Destination = MyStrlen(str_destination);
	
		
	
	
		for (rlk_i = rlk_iStringLength_Destination, rlk_j = 0; rlk_j < rlk_iStringLength_Source; rlk_i++,rlk_j++)
		{
			*(str_destination + rlk_i) = *(str_source + rlk_j);
		}
	*(str_destination + rlk_i) = '\0';
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

