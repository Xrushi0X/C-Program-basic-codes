#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//variable declarations
char rlk_chArray_Original[MAX_STRING_LENGTH], rlk_chArray_Copy[MAX_STRING_LENGTH]; 

//code

printf("\n\n");
printf("Enter A String : \n\n");
gets_s(rlk_chArray_Original, MAX_STRING_LENGTH);

strcpy(rlk_chArray_Copy, rlk_chArray_Original);

printf("\n\n");
printf("The Original String Entered By You (i.e : 'chArray_Original[]') Is :\n\n");
printf("%s\n", rlk_chArray_Original);
printf("\n\n");
printf("The Copied String (i.e : 'chArray_Copy[]') Is : \n\n");

printf("%s\n", rlk_chArray_Copy);
return(0);
}