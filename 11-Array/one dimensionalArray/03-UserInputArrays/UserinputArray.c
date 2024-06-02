#include <stdio.h>
#define INT_ARRAY_NUM_ELEMENTS 5
#define FLOAT_ARRAY_NUM_ELEMENTS 3
#define CHAR_ARRAY_NUM_ELEMENTS 15
int main(void)
{
//variable declarations
int rlk_iArray[INT_ARRAY_NUM_ELEMENTS];
float rlk_fArray[FLOAT_ARRAY_NUM_ELEMENTS];
char rlk_cArray[CHAR_ARRAY_NUM_ELEMENTS];
int rlk_i, rlk_num;
//code

printf("\n\n");
printf("Enter Elements For 'Integer' Array : \n");
for (rlk_i = 0; rlk_i < INT_ARRAY_NUM_ELEMENTS; rlk_i++)
scanf("%d", &rlk_iArray[rlk_i]);
printf("\n\n");
printf("Enter Elements For 'Floating-Point' Array : \n");
for (rlk_i = 0; rlk_i < FLOAT_ARRAY_NUM_ELEMENTS; rlk_i++)
scanf("%f", &rlk_fArray[rlk_i]);
printf("\n\n");
printf("Enter Elements For 'Character' Array : \n");
for (rlk_i = 0; rlk_i < CHAR_ARRAY_NUM_ELEMENTS; rlk_i++)
{
	rlk_cArray[rlk_i] = getch();
printf("%c\n", rlk_cArray[rlk_i]);
}
printf("\n\n");
printf("Integer Array Entered By You : \n\n");
for (rlk_i = 0; rlk_i < INT_ARRAY_NUM_ELEMENTS; rlk_i++)
printf("%d\n", rlk_iArray[rlk_i]);
printf("\n\n");
printf("Floating-Point Array Entered By You : \n\n");
for (rlk_i = 0; rlk_i < FLOAT_ARRAY_NUM_ELEMENTS; rlk_i++)
printf("%f\n", rlk_fArray[rlk_i]);
printf("\n\n");

printf("Character Array Entered By You : \n\n");
for (rlk_i = 0; rlk_i < CHAR_ARRAY_NUM_ELEMENTS; rlk_i++)
printf("%c\n", rlk_cArray[rlk_i]);
return(0);
}