#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
int MyStrlen(char[]);
void MyStrcpy(char[], char[]);
//variable declarations
char rlk_chArray[MAX_STRING_LENGTH]; 
int rlk_iStringLength;
int rlk_i;
int rlk_word_count = 0, rlk_space_count = 0;
//code

printf("\n\n");
printf("Enter A String : \n\n");
gets_s(rlk_chArray, MAX_STRING_LENGTH);
rlk_iStringLength = MyStrlen(rlk_chArray);
		for (rlk_i = 0; rlk_i < rlk_iStringLength; rlk_i++)
		{
		switch (rlk_chArray[rlk_i])
		{
		case 32: 
			rlk_space_count++;
		break;
		default:
		break;
		}
}
rlk_word_count = rlk_space_count + 1;

		printf("\n\n");
		printf("String Entered By You Is : \n\n");
		printf("%s\n", rlk_chArray);
		printf("\n\n");
		printf("Number Of Spaces In The Input String = %d\n\n", rlk_space_count);
		printf("Number Of Words In The Input String = %d\n\n", rlk_word_count);
		return(0);
}
int MyStrlen(char str[])

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