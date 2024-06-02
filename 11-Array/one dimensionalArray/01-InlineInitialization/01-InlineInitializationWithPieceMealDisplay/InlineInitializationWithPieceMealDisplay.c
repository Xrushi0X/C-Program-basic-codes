#include <stdio.h>
int main(void)
{
//variable declaraions
int iArray[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
int int_size;
int iArray_size;
int iArray_num_elements;

//code
// ****** iArray[] ******
printf("\n\n");
printf("In-line Initialization And Piece-meal Display Of Elements of Array'iArray[]': \n\n");
printf("iArray[0] (1st Element) = %d\n", iArray[0]);
printf("iArray[1] (2nd Element) = %d\n", iArray[1]);
printf("iArray[2] (3rd Element) = %d\n", iArray[2]);
printf("iArray[3] (4th Element) = %d\n", iArray[3]);
printf("iArray[4] (5th Element) = %d\n", iArray[4]);
printf("iArray[5] (6th Element) = %d\n", iArray[5]);
printf("iArray[6] (7th Element) = %d\n", iArray[6]);
printf("iArray[7] (8th Element) = %d\n", iArray[7]);
printf("iArray[8] (9th Element) = %d\n", iArray[8]);
printf("iArray[9] (10th Element) = %d\n\n", iArray[9]);
int_size = sizeof(int);
iArray_size = sizeof(iArray);
iArray_num_elements = iArray_size / int_size;
printf("Size Of Data type 'int' = %d bytes\n",int_size);
printf("Number Of Elements In 'int' Array 'iArray[]' = %d Elements\n",iArray_num_elements);
printf("Size Of Array 'iArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n",iArray_num_elements, int_size, iArray_size);

return(0);
}