#include <stdio.h>
#define MAX_STRING_LENGTH 512
int main(void)
{


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


rlk_strArray[0][0] = 'M';
rlk_strArray[0][1] = 'y';
rlk_strArray[0][2] = '\0'; 


rlk_strArray[1][0] = 'N';
rlk_strArray[1][1] = 'a';
rlk_strArray[1][2] = 'm';
rlk_strArray[1][3] = 'e';

rlk_strArray[2][0] = 'I';
rlk_strArray[2][1] = 's';
rlk_strArray[2][2] = '\0'; 

rlk_strArray[3][0] = 'R';
rlk_strArray[3][1] = 'u';
rlk_strArray[3][2] = 's';
rlk_strArray[3][3] = 'h';
rlk_strArray[3][4] = 'i';
rlk_strArray[3][5] = '\0';


rlk_strArray[4][0] = 'K';
rlk_strArray[4][1] = 'o';
rlk_strArray[4][2] = 'R';
rlk_strArray[4][3] = 'D';
rlk_strArray[4][4] = 'E';
rlk_strArray[4][5] = '\0';
printf("\n\n");
printf("The Strings In the 2D Character Array Are : \n\n");
for (rlk_i = 0; rlk_i < rlk_strArray_num_rows; rlk_i++)
printf("%s ", rlk_strArray[rlk_i]);
printf("\n\n");
return(0);
}
int MyStrlen(char str[])
{
//variable declarations
int rlk_j;
int rlk_string_length = 0;
//code

for (rlk_j = 0; rlk_j < MAX_STRING_LENGTH; rlk_j++) {
if
(str[rlk_j] == '\0'
)
break
;
else
rlk_string_length++;
}
return(rlk_string_length);
}
