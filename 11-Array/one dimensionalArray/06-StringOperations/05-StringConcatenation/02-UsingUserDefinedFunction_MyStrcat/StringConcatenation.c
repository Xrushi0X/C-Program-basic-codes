#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
void MyStrcat(char[], char[]);
//variable declarations
char rlk_chArray_One[MAX_STRING_LENGTH], rlk_chArray_Two[MAX_STRING_LENGTH];
//code

printf("\n\n");
printf("Enter First String : \n\n");
gets_s(rlk_chArray_One, MAX_STRING_LENGTH);
printf("\n\n");
printf("Enter Second String : \n\n");
gets_s(rlk_chArray_Two, MAX_STRING_LENGTH);

printf("\n\n");
printf("****** BEFORE CONCATENATION ******");
printf("\n\n");
printf("The Original First String Entered By You (i.e : 'chArray_One[]') Is :\n\n");
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
return(0);
}
void MyStrcat(char rlk_str_destination[], char rlk_str_source[])
{
//function prototype
int rlk_MyStrlen(char[]);
//variable declarations
int rlk_iStringLength_Source = 0, rlk_iStringLength_Destination = 0;
int rlk_i, rlk_j;
//code
rlk_iStringLength_Source = rlk_MyStrlen(rlk_str_source);
rlk_iStringLength_Destination = rlk_MyStrlen(rlk_str_destination);

for (rlk_i = rlk_iStringLength_Destination, rlk_j = 0; rlk_j < rlk_iStringLength_Source; rlk_i++, rlk_j++)
{
	rlk_str_destination[rlk_i] = rlk_str_source[rlk_j];
}
rlk_str_destination[rlk_i] = '\0';
}
int rlk_MyStrlen(char str[])
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
