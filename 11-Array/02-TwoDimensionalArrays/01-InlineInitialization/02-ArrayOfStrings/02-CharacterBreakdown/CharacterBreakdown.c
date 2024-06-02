#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
int MyStrlen(char[]);
//variable declaraions


char rlk_strArray[10][15] = { "MY", "NAME", "IS", "RUSHIKESH", "LAXMIKANT","KORDE", "STUDYING",  "IN", "ASTROMEDICOMP." }; 

int iStrLengths[10];

int rlk_strArray_size;
int rlk_strArray_num_rows;
int rlk_i, rlk_j;
//code
rlk_strArray_size = sizeof(rlk_strArray);
rlk_strArray_num_rows = rlk_strArray_size / sizeof(rlk_strArray[0]);

for (rlk_i = 0; rlk_i < rlk_strArray_num_rows; rlk_i++)
	iStrLengths[rlk_i] = MyStrlen(rlk_strArray[rlk_i]);
printf("\n\n");
printf("The Entire String Array : \n\n");
for (rlk_i = 0; rlk_i < rlk_strArray_num_rows; rlk_i++)
printf("%s ", rlk_strArray[rlk_i]);
printf("\n\n");
printf("Strings In The 2D Array : \n\n");





for (rlk_i = 0; rlk_i < rlk_strArray_num_rows; rlk_i++)
{
printf("String Number %d => %s\n\n", (rlk_i + 1), rlk_strArray[rlk_i]);
for (rlk_j = 0; rlk_j < iStrLengths[rlk_i]; rlk_j++)
{
printf("Character %d = %c\n", (rlk_j + 1), rlk_strArray[rlk_i][rlk_j]);
}
printf("\n\n");
}
return(0);
}
int MyStrlen(char str[])
{
//variable declarations
int rlk_j;
int string_length = 0;
//code

for (rlk_j = 0; rlk_j < MAX_STRING_LENGTH; rlk_j++)
{
if (str[rlk_j] == '\0')
break;
else
string_length++;
}
return(string_length);
}