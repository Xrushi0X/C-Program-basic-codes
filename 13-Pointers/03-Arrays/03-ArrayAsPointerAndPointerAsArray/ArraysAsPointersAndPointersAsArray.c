#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_iArray[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }; //Integer Array
	int* rlk_ptr_iArray = NULL; //Integer Pointer
	//code

printf("\n\n");
printf("*** USING ARRAY NAME AS A POINTER i.e : Value Of xth Element OfiArray : *(iArray + x) AND Address Of xth Element Of iArray : (iArray + x)* **\n\n");
	printf("Integer Array Elements And Their Addresses : \n\n");
printf("*(iArray + 0) = %d \t At Address (iArray + 0) : %p\n", *(rlk_iArray + 0),(rlk_iArray + 0));
printf("*(iArray + 1) = %d \t At Address (iArray + 1) : %p\n", *(rlk_iArray + 1),(rlk_iArray + 1));
printf("*(iArray + 2) = %d \t At Address (iArray + 2) : %p\n", *(rlk_iArray + 2),(rlk_iArray + 2));
printf("*(iArray + 3) = %d \t At Address (iArray + 3) : %p\n", *(rlk_iArray + 3),(rlk_iArray + 3));
printf("*(iArray + 4) = %d \t At Address (iArray + 4) : %p\n", *(rlk_iArray + 4),(rlk_iArray + 4));
printf("*(iArray + 5) = %d \t At Address (iArray + 5) : %p\n", *(rlk_iArray + 5),(rlk_iArray + 5));
printf("*(iArray + 6) = %d \t At Address (iArray + 6) : %p\n", *(rlk_iArray + 6),(rlk_iArray + 6));
printf("*(iArray + 7) = %d \t At Address (iArray + 7) : %p\n", *(rlk_iArray + 7),(rlk_iArray + 7));
printf("*(iArray + 8) = %d \t At Address (iArray + 8) : %p\n", *(rlk_iArray + 8),(rlk_iArray + 8));
printf("*(iArray + 9) = %d \t At Address (iArray + 9) : %p\n", *(rlk_iArray + 9),(rlk_iArray + 9));

printf("\n\n");
printf("*** USING POINTER AS ARRAY NAME i.e : Value Of xth Element Of iArray :ptr_iArray[x] AND Address Of xth Element Of iArray : &ptr_iArray[x] * **\n\n");
	printf("Integer Array Elements And Their Addresses : \n\n");
printf("ptr_iArray[0] = %d \t At Address &ptr_iArray[0] : %p\n", rlk_ptr_iArray[0], &rlk_ptr_iArray[0]);
printf("ptr_iArray[1] = %d \t At Address &ptr_iArray[1] : %p\n", rlk_ptr_iArray[1], &rlk_ptr_iArray[1]);
printf("ptr_iArray[2] = %d \t At Address &ptr_iArray[2] : %p\n", rlk_ptr_iArray[2], &rlk_ptr_iArray[2]);
printf("ptr_iArray[3] = %d \t At Address &ptr_iArray[3] : %p\n", rlk_ptr_iArray[3], &rlk_ptr_iArray[3]);
printf("ptr_iArray[4] = %d \t At Address &ptr_iArray[4] : %p\n", rlk_ptr_iArray[4], &rlk_ptr_iArray[4]);
printf("ptr_iArray[5] = %d \t At Address &ptr_iArray[5] : %p\n", rlk_ptr_iArray[5], &rlk_ptr_iArray[5]);
printf("ptr_iArray[6] = %d \t At Address &ptr_iArray[6] : %p\n", rlk_ptr_iArray[6], &rlk_ptr_iArray[6]);
printf("ptr_iArray[7] = %d \t At Address &ptr_iArray[7] : %p\n", rlk_ptr_iArray[7], &rlk_ptr_iArray[7]);
printf("ptr_iArray[8] = %d \t At Address &ptr_iArray[8] : %p\n", rlk_ptr_iArray[8], &rlk_ptr_iArray[8]);
printf("ptr_iArray[9] = %d \t At Address &ptr_iArray[9] : %p\n", rlk_ptr_iArray[9], &rlk_ptr_iArray[9]);
return(0);
}