#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//variable declarations
char chArray[MAX_STRING_LENGTH]; 
int rlk_iStringLength = 0;
//code

printf("\n\n");
printf("Enter A String : \n\n");
gets_s(chArray, MAX_STRING_LENGTH);

printf("\n\n");
printf("String Entered By You Is : \n\n");
printf("%s\n",chArray);

printf("\n\n");
rlk_iStringLength = strlen(chArray);
printf("Length Of String Is = %d Characters !!!\n\n", rlk_iStringLength);
return(0);
}