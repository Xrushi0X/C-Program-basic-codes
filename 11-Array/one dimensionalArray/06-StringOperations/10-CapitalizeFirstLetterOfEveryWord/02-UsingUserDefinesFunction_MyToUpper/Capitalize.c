#include <stdio.h>
#define MAX_STRING_LENGTH 512
#define SPACE ' '
#define FULLSTOP '.'
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'
int main(void)
{
//function prototype
int MyStrlen(char[]);
char MyToUpper(char);
//variable declarations
char rlk_chArray[MAX_STRING_LENGTH], rlk_chArray_CapitalizedFirstLetterOfEveryWord
[MAX_STRING_LENGTH]; 
int rlk_iStringLength;
int rlk_i, rlk_j;
//code

printf("\n\n");
printf("Enter A String : \n\n");
gets_s(rlk_chArray, MAX_STRING_LENGTH);
rlk_iStringLength = MyStrlen(rlk_chArray);
rlk_j = 0;
for (rlk_i = 0; rlk_i < rlk_iStringLength; rlk_i++)
{
if (rlk_i == 0)
rlk_chArray_CapitalizedFirstLetterOfEveryWord[rlk_j] = MyToUpper(rlk_chArray[rlk_i]);
else if (rlk_chArray[rlk_i] == SPACE)

{
	rlk_chArray_CapitalizedFirstLetterOfEveryWord[rlk_j] = rlk_chArray[rlk_i];
	rlk_chArray_CapitalizedFirstLetterOfEveryWord[rlk_j + 1] = MyToUpper(rlk_chArray[rlk_i + 1]);


	rlk_j++;
	rlk_i++;
}
else if ((rlk_chArray[rlk_i] == FULLSTOP || rlk_chArray[rlk_i] == COMMA || rlk_chArray[rlk_i] ==EXCLAMATION || rlk_chArray[rlk_i] == QUESTION_MARK) && (rlk_chArray[rlk_i] !=SPACE))

{
	rlk_chArray_CapitalizedFirstLetterOfEveryWord[rlk_j] = rlk_chArray[rlk_i];
	rlk_chArray_CapitalizedFirstLetterOfEveryWord[rlk_j + 1] = SPACE;
	rlk_chArray_CapitalizedFirstLetterOfEveryWord[rlk_j + 2] = MyToUpper(rlk_chArray[rlk_i + 1]);



rlk_j = rlk_j + 2;
rlk_i++;
}
else
rlk_chArray_CapitalizedFirstLetterOfEveryWord[rlk_j] = rlk_chArray[rlk_i];
rlk_j++;
}
rlk_chArray_CapitalizedFirstLetterOfEveryWord[rlk_j] = '\0';
// *** STRING OUTPUT ***
printf("\n\n");
printf("String Entered By You Is : \n\n");
printf("%s\n", rlk_chArray);
printf("\n\n");
printf("String After Capitalizing First Letter Of Every Word : \n\n");
printf("%s\n", rlk_chArray_CapitalizedFirstLetterOfEveryWord);
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
char MyToUpper(char ch)
{
//variable declaration
int rlk_num;
int rlk_c;
//code


rlk_num = 'a' - 'A';
if ((int)ch >= 97 && (int)ch <= 122)
{
rlk_c = (int)ch - rlk_num;
return((char)rlk_c);
}
else
return(ch);
}

