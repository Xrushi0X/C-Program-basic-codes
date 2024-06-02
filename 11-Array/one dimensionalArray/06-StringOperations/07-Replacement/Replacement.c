#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
int MyStrlen(char[]);
void MyStrcpy(char[], char[]);
//variable declarations
char rlk_chArray_Original[MAX_STRING_LENGTH], rlk_chArray_VowelsReplaced[MAX_STRING_LENGTH];
int rlk_iStringLength;
int rlk_i;
//code

printf("\n\n");
printf("Enter A String : \n\n");
gets_s(rlk_chArray_Original, MAX_STRING_LENGTH);

MyStrcpy(rlk_chArray_VowelsReplaced, rlk_chArray_Original);
rlk_iStringLength = MyStrlen(rlk_chArray_VowelsReplaced);
for (rlk_i = 0; rlk_i < rlk_iStringLength; rlk_i++)
{
switch (rlk_chArray_VowelsReplaced[rlk_i])
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
	rlk_chArray_VowelsReplaced[rlk_i] = '*';
break;
default:
break;
}	

}

printf("\n\n");
printf("String Entered By You Is : \n\n");
printf("%s\n", rlk_chArray_Original);
printf("\n\n");
printf("String After Replacement Of Vowels By * Is : \n\n");
printf("%s\n", rlk_chArray_VowelsReplaced);
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
void MyStrcpy(char str_destination[], char str_source[])
{
//function prototype
int MyStrlen(char[]);
//variable declarations
int rlk_iStringLength = 0;
int rlk_j;
//code
rlk_iStringLength = MyStrlen(str_source);
for (rlk_j = 0; rlk_j < rlk_iStringLength; rlk_j++)
str_destination[rlk_j] = str_source[rlk_j];
str_destination[rlk_j] = '\0';
}