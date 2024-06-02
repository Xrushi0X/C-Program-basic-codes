#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_iArray[] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120 };
	float rlk_fArray[] = { 9.8f, 8.7f, 7.6f, 6.5f, 5.4f };
	double rlk_dArray[] = { 1.222222, 2.333333, 3.444444 };
	char rlk_cArray[] = { 'R', 'U', 'S', 'H', 'I', 'K', 'E', 'S', 'H', 'K', 'O', 'R','D', 'E' };
	//code
	printf("\n\n");
	printf("Integer Array Elements And The Addresses They Occupy Are As Follows :\n\n");
	
	printf("iArray[0] = %d \t At Address : %p\n", *(rlk_iArray + 0), (rlk_iArray + 0));
	
	printf("iArray[1] = %d \t At Address : %p\n", *(rlk_iArray + 1), (rlk_iArray + 1));
	
	printf("iArray[2] = %d \t At Address : %p\n", *(rlk_iArray + 2), (rlk_iArray + 2));
	
	printf("iArray[3] = %d \t At Address : %p\n", *(rlk_iArray + 3), (rlk_iArray + 3));
	
	printf("iArray[4] = %d \t At Address : %p\n", *(rlk_iArray + 4), (rlk_iArray + 4));
	
	printf("iArray[5] = %d \t At Address : %p\n", *(rlk_iArray + 5), (rlk_iArray + 5));
	
	printf("iArray[6] = %d \t At Address : %p\n", *(rlk_iArray + 6), (rlk_iArray + 6));
	
	printf("iArray[7] = %d \t At Address : %p\n", *(rlk_iArray + 7), (rlk_iArray + 7));
	
	printf("iArray[8] = %d \t At Address : %p\n", *(rlk_iArray + 8), (rlk_iArray + 8));
	
	printf("iArray[9] = %d \t At Address : %p\n", *(rlk_iArray + 9), (rlk_iArray + 9));
	
	printf("\n\n");
	
	printf("Float Array Elements And The Addresses They Occupy Are As Follows : \n\n");
	
	printf("fArray[0] = %f \t At Address : %p\n", *(rlk_fArray + 0), (rlk_fArray + 0));
	
	printf("fArray[1] = %f \t At Address : %p\n", *(rlk_fArray + 1), (rlk_fArray + 1));
	
	printf("fArray[2] = %f \t At Address : %p\n", *(rlk_fArray + 2), (rlk_fArray + 2));
	
	printf("fArray[3] = %f \t At Address : %p\n", *(rlk_fArray + 3), (rlk_fArray + 3));
	
	printf("fArray[4] = %f \t At Address : %p\n", *(rlk_fArray + 4), (rlk_fArray + 4));
	
	printf("\n\n");
	
	printf("Double Array Elements And The Addresses They Occupy Are As Follows :	\n\n");
		
	printf("dArray[0] = %lf \t At Address : %p\n", *(rlk_dArray + 0), (rlk_dArray + 0));
	printf("dArray[1] = %lf \t At Address : %p\n", *(rlk_dArray + 1), (rlk_dArray + 1));
	printf("dArray[2] = %lf \t At Address : %p\n", *(rlk_dArray + 2), (rlk_dArray + 2));
	printf("\n\n");
	printf("Character Array Elements And The Addresses They Occupy Are AsFollows : \n\n");
	
	printf("cArray[0] = %c \t At Address : %p\n", *(rlk_cArray + 0), (rlk_cArray + 0));
	printf("cArray[1] = %c \t At Address : %p\n", *(rlk_cArray + 1), (rlk_cArray + 1));
	printf("cArray[2] = %c \t At Address : %p\n", *(rlk_cArray + 2), (rlk_cArray + 2));
	printf("cArray[3] = %c \t At Address : %p\n", *(rlk_cArray + 3), (rlk_cArray + 3));
	printf("cArray[4] = %c \t At Address : %p\n", *(rlk_cArray + 4), (rlk_cArray + 4));
	printf("cArray[5] = %c \t At Address : %p\n", *(rlk_cArray + 5), (rlk_cArray + 5));
	printf("cArray[6] = %c \t At Address : %p\n", *(rlk_cArray + 6), (rlk_cArray + 6));
	printf("cArray[7] = %c \t At Address : %p\n", *(rlk_cArray + 7), (rlk_cArray + 7));
	printf("cArray[8] = %c \t At Address : %p\n", *(rlk_cArray + 8), (rlk_cArray + 8));
	printf("cArray[9] = %c \t At Address : %p\n", *(rlk_cArray + 9), (rlk_cArray + 9));
	printf("cArray[10] = %c \t At Address : %p\n", *(rlk_cArray + 10), (rlk_cArray +10));
	printf("cArray[11] = %c \t At Address : %p\n", *(rlk_cArray + 11), (rlk_cArray +11));
	printf("cArray[12] = %c \t At Address : %p\n", *(rlk_cArray + 12), (rlk_cArray +12));
	printf("cArray[13] = %c \t At Address : %p\n", *(rlk_cArray + 13), (rlk_cArray +13));
	return(0);


}

