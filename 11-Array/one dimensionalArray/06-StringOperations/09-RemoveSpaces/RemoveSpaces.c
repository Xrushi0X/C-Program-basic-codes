#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
int MyStrlen(char[]);
void MyStrcpy(char[], char[]);
//variable declarations
char rlk_chArray[MAX_STRING_LENGTH], rlk_chArray_SpacesRemoved[MAX_STRING_LENGTH];

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
if (rlk_chArray[rlk_i] == ' ')
continue;
else
{
	rlk_chArray_SpacesRemoved[rlk_j] = rlk_chArray[rlk_i];
	rlk_j++;
}
}
rlk_chArray_SpacesRemoved[rlk_j] = '\0';

printf("\n\n");
printf("String Entered By You Is : \n\n");
printf("%s\n", rlk_chArray);
printf("\n\n");
printf("String After Removal Of Spaces Is : \n\n");
printf("%s\n", rlk_chArray_SpacesRemoved);
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
