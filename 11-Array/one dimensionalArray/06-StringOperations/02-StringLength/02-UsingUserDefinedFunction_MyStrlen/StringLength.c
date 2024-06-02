#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
int MyStrlen(char[]);
//variable declarations
char rlk_chArray[MAX_STRING_LENGTH]; 
int rlk_iStringLength = 0;
//code

printf("\n\n");
printf("Enter A String : \n\n");
gets_s(rlk_chArray, MAX_STRING_LENGTH);

printf("\n\n");
printf("String Entered By You Is : \n\n");
printf("%s\n", rlk_chArray);

printf("\n\n");
rlk_iStringLength = MyStrlen(rlk_chArray);
printf("Length Of String Is = %d Characters !!!\n\n", rlk_iStringLength);
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
