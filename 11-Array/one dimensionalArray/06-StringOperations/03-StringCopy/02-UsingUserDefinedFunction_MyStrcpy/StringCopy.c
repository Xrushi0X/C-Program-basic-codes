#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype

	void MyStrcpy(char[], char[]);

//variable declarations

char rlk_chArray_Original[MAX_STRING_LENGTH], rlk_chArray_Copy[MAX_STRING_LENGTH]; 


//code

printf("\n\n");
printf("Enter A String : \n\n");
gets_s(rlk_chArray_Original, MAX_STRING_LENGTH);

MyStrcpy(rlk_chArray_Copy, rlk_chArray_Original);

printf("\n\n");
printf("The Original String Entered By You (i.e : 'chArray_Original[]') Is :\n\n");
printf("%s\n", rlk_chArray_Original);
printf("\n\n");
printf("The Copied String (i.e : 'chArray_Copy[]') Is : \n\n");
printf("%s\n", rlk_chArray_Copy);
return(0);
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


