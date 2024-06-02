#include<stdio.h>

int main(void)
{
	//Variable Dec
	int rlk_a;
	int rlk_b;
	int rlk_c;
	int result;

	//code
	printf("\n\n");
	printf("Enter First Integer : ");
	scanf("%d", &rlk_a);

	printf("\n\n");
	printf("Enter Second Integer : ");
	scanf("%d", &rlk_b);

	printf("\n\n");
	printf("Enter Third Integer : ");
	scanf("%d", &rlk_c);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE'.\n");
	printf("If Answere = 1, It Is 'True'.\n\n");


	result = (rlk_a <= rlk_b) && (rlk_b != rlk_c);
	printf("LOGICAL AND (&&) : Answer Is True (1) If And Only If BOTH CONDITION Are True. The Answere Is FALSE(0),If ANy One Or OTH COndition Are False.\n\n");
	printf("A =%d Is Less Than Or EQUAL To B = %d AND B = %d IS NOT Equal To C = %d  \t Answere = %d\n\n", rlk_a, rlk_b,rlk_b ,rlk_c, result); 

	result = (rlk_b >= rlk_a) || (rlk_a == rlk_c);
	printf("LOGICAL OR (||) : Answer Is FALSE (0) If And Only If BOTH CONDITION Are FALSE. The Answere Is TRUE (1),If ANy One Or BOTH COndition Are TRUE.\n\n");
	printf("Either B = %d Is Greather Or Equal To A %d OR A = %d IS Equal To C = %d \t Answere =%d\n\n", rlk_b, rlk_a, rlk_a, rlk_c, result);


	result = !rlk_a;
	printf("A = %d And Using Logical NOT (!) Operator On A gives REsult = %d\n\n", rlk_a, result);



	result = !rlk_b;
	printf("B = %d And Using Logical NOT (!) Operator On A gives REsult = %d\n\n", rlk_b, result);



	result = !rlk_c;
	printf("C = %d And Using Logical NOT (!) Operator On A gives REsult = %d\n\n", rlk_c, result);

	result = (!(rlk_a <= rlk_b) && !(rlk_b != rlk_c));
	printf("Using Logical NOT (!) On (rlk_a <= rlk_b) And Also ON (rlk_b != rlk_c) And Then ANDING Them After Gives REsult =%d\n ", result);

	printf("\n\n");
	
	result = !((rlk_b >= rlk_a) || (rlk_a == rlk_c));
	printf("Using Logical NOT (!) On Entire Logical Expression (rlk_b >= rlk_a) || (rlk_a == rlk_c) Gives result =%d\n", result);
	
	printf("\n\n");

	return(0);

} 
