#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
int MyStrlen(char[]);
//variable declarations
char rlk_chArray[MAX_STRING_LENGTH]; 
int rlk_iStringLength;
int rlk_count_A = 0, rlk_count_E = 0, rlk_count_I = 0, rlk_count_O = 0, rlk_count_U = 0;

int rlk_i;
//code

printf("\n\n");
printf("Enter A String : \n\n");
gets_s(rlk_chArray, MAX_STRING_LENGTH);

printf("\n\n");
printf("String Entered By You Is : \n\n");
printf("%s\n", rlk_chArray);
rlk_iStringLength = MyStrlen(rlk_chArray);
for (rlk_i = 0; rlk_i < rlk_iStringLength; rlk_i++)
{
switch (rlk_chArray[rlk_i])
{
case 'A':
case 'a':
	rlk_count_A++;
break;
case 'E':
case 'e':
	rlk_count_E++;
break;
case 'I':
case 'i':
	rlk_count_I++;
break;
case 'O':
case 'o':
	rlk_count_O++;
break;
case 'U':
case 'u':
	rlk_count_U++;
break;
default:
break;
}
}
printf("\n\n");
printf("In The String Entered By You, The Vowels And The Number Of TheirOccurences Are Are Follows : \n\n");
printf("'A' Has Occured = %d Times !!!\n\n", rlk_count_A);
printf("'E' Has Occured = %d Times !!!\n\n", rlk_count_E);
printf("'I' Has Occured = %d Times !!!\n\n", rlk_count_I);
printf("'O' Has Occured = %d Times !!!\n\n", rlk_count_O);
printf("'U' Has Occured = %d Times !!!\n\n", rlk_count_U);
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