#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
int MyStrlen(char[]);
//variable declaraions


char strArray[10][15] = { "Hello!", "Welcome", "To", "Real", "Time","Rendering", "Batch", "(2020-21)", "Of", "ASTROMEDICOMP." }; 

int rlk_char_size;
int rlk_strArray_size;
int rlk_strArray_num_elements, rlk_strArray_num_rows, rlk_strArray_num_columns;
int rlk_strActual_num_chars = 0;
int rlk_i;
//code
printf("\n\n");
rlk_char_size = sizeof(char);
rlk_strArray_size = sizeof(strArray);
printf("Size Of Two Dimensional ( 2D ) Character Array (String Array) Is = %d\n\n", rlk_strArray_size);

rlk_strArray_num_rows = rlk_strArray_size / sizeof(strArray[0]);
printf("Number of Rows (Strings) In Two Dimensional ( 2D ) Character Array(String Array) Is = %d\n\n", rlk_strArray_num_rows);
rlk_strArray_num_columns = sizeof(strArray[0]) / rlk_char_size;

printf("Number of Columns In Two Dimensional ( 2D ) Character Array (StringArray) Is = %d\n\n", rlk_strArray_num_columns);

rlk_strArray_num_elements = rlk_strArray_num_rows * rlk_strArray_num_columns;
printf("Maximum Number of Elements (Characters) In Two Dimensional ( 2D )Character Array (String Array) Is = %d\n\n", rlk_strArray_num_elements);
for (rlk_i = 0; rlk_i < rlk_strArray_num_rows; rlk_i++)
{
	rlk_strActual_num_chars = rlk_strActual_num_chars + MyStrlen(strArray[rlk_i]);
}
printf("Actual Number of Elements (Characters) In Two Dimensional ( 2D )Character Array (String Array) Is = %d\n\n", rlk_strActual_num_chars);
printf("\n\n");
printf("Strings In The 2D Array : \n\n");

printf("%s ", strArray[0]);
printf("%s ", strArray[1]);
printf("%s ", strArray[2]);
printf("%s ", strArray[3]);
printf("%s ", strArray[4]);
printf("%s ", strArray[5]);
printf("%s ", strArray[6]);
printf("%s ", strArray[7]);
printf("%s ", strArray[8]);
printf("%s\n\n", strArray[9]);
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

