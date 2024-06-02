 #include <stdio.h>

int main(void)
{
//variable declarations
int rlk_num = 5;
const int* const ptr = &rlk_num; 

//code
	printf("\n");
	printf("Current Value of 'num' = %d\n", rlk_num);
	printf("Current 'ptr' (Address of 'num') = %p\n", ptr);

	rlk_num++;
	printf("\n\n");
	printf("After num++, value of 'num' = %d\n", rlk_num);

	return(0);
}
