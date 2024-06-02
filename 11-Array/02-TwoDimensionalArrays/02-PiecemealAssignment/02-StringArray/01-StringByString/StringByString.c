#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{
//function prototype
void MyStrcpy(char[], char[]);
//variable declaraions


char rlk_strArray[5][10]; 

int rlk_char_size;
int rlk_strArray_size;
int rlk_strArray_num_elements, rlk_strArray_num_rows, rlk_strArray_num_columns;
int rlk_i;
//code
printf("\n\n");
rlk_char_size = sizeof(char);
rlk_strArray_size = sizeof(rlk_strArray);

printf("Size Of Two Dimensional ( 2D ) Character Array (String Array) Is = %d\n\n", rlk_strArray_size);
rlk_strArray_num_rows = rlk_strArray_size / sizeof(rlk_strArray[0]);

printf("Number of Rows (Strings) In Two Dimensional ( 2D ) Character Array(String Array) Is = %d\n\n", rlk_strArray_num_rows);
rlk_strArray_num_columns = sizeof(rlk_strArray[0]) / rlk_char_size;

printf("Number of Columns In Two Dimensional ( 2D ) Character Array (StringArray) Is = %d\n\n", rlk_strArray_num_columns);
rlk_strArray_num_elements = rlk_strArray_num_rows * rlk_strArray_num_columns;

printf("Maximum Number of Elements (Characters) In Two Dimensional ( 2D )Character Array (String Array) Is = %d\n\n", rlk_strArray_num_elements);

MyStrcpy(rlk_strArray[0], "My");
MyStrcpy(rlk_strArray[1], "Name");

MyStrcpy(rlk_strArray[2], "Is");
MyStrcpy(rlk_strArray[3], "Rushikesh");
MyStrcpy(rlk_strArray[4], "Korde");
printf("\n\n");
printf("The Strings In the 2D Character Array Are : \n\n");
for (rlk_i = 0; rlk_i < rlk_strArray_num_rows; rlk_i++)
printf("%s ", rlk_strArray[rlk_i]);
printf("\n\n");
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