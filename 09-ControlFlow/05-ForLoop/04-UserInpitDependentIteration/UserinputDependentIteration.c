#include <stdio.h>

int main(void)
{
	//variable Declarations
	
	int rlk_i_num, rlk_num, rlk_i;
	
	//code
	
	printf("\n\n");
	
	printf("Enter An Integer Value From Which Iteration Must Begin : ");
	
	scanf("%d", &rlk_i_num);
	
	printf("How Many Digits Do You Want To Print From %d Onwards ? : ", rlk_i_num);
	
	scanf("%d", &rlk_num);
	
	printf("Printing Digits %d to %d : \n\n", rlk_i_num, (rlk_i_num + rlk_num));
	
	for (rlk_i = rlk_i_num; rlk_i <= (rlk_i_num + rlk_num); rlk_i++)
	
	{
		printf("\t%d\n", rlk_i);
	}
	
	
	printf("\n\n");
	
	
	
	return(0);
}