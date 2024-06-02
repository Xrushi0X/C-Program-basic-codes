#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
void MyStrrev(char[], char[]);
//variable declarations
char rlk_chArray_Original[MAX_STRING_LENGTH], rlk_chArray_Reversed
[MAX_STRING_LENGTH]; 
//code

printf("\n\n");
printf("Enter A String : \n\n");
gets_s(rlk_chArray_Original, MAX_STRING_LENGTH);

MyStrrev(rlk_chArray_Reversed, rlk_chArray_Original);

printf("\n\n");
printf("The Original String Entered By You (i.e : 'chArray_Original[]') Is :\n\n");
printf("%s\n", rlk_chArray_Original);
printf("\n\n");
printf("The Reversed String (i.e : 'chArray_Reversed[]') Is : \n\n");
printf("%s\n", rlk_chArray_Reversed);
return(0);
}
void MyStrrev(char rlk_str_destination[], char str_source[])
{
//function prototype
int MyStrlen(char[]);
//variable declarations
int rlk_iStringLength = 0;
int rlk_i, rlk_j, rlk_len;
//code
rlk_iStringLength = MyStrlen(str_source);

rlk_len = rlk_iStringLength - 1;
for (rlk_i = 0, rlk_j = rlk_len; rlk_i < rlk_iStringLength, rlk_j >= 0; rlk_i++, rlk_j--)
{
	rlk_str_destination[rlk_i] = str_source[rlk_j];
}
rlk_str_destination[rlk_i] = '\0';
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
