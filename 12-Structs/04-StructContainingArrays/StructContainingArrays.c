#include <stdio.h>
#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26
#define NUM_STRINGS 10
#define MAX_CHARACTERS_PER_STRING 20
#define ALPHABET_BEGINNING 65 // 'A'
struct MyDataOne
{
	int rlk_iArray[INT_ARRAY_SIZE];
	float rlk_fArray[FLOAT_ARRAY_SIZE];
};
struct MyDataTwo
{
	char rlk_cArray[CHAR_ARRAY_SIZE];
	char rlk_strArray[NUM_STRINGS][MAX_CHARACTERS_PER_STRING];
};
int main(void)
{
	//variable declarations
	struct MyDataOne data_one;
	struct MyDataTwo data_two;
	int rlk_i;
	//code
	data_one.rlk_fArray[0] = 0.1f;
	data_one.rlk_fArray[1] = 1.2f;
	data_one.rlk_fArray[2] = 2.3f;
	data_one.rlk_fArray[3] = 3.4f;
	data_one.rlk_fArray[4] = 4.5f;
	
	printf("\n\n");
	printf("Enter %d Integers : \n\n", INT_ARRAY_SIZE);
	for (rlk_i = 0; rlk_i < INT_ARRAY_SIZE; rlk_i++)
		scanf("%d", &data_one.rlk_iArray[rlk_i]);

	for (rlk_i = 0; rlk_i < CHAR_ARRAY_SIZE; rlk_i++)
		data_two.rlk_cArray[rlk_i] = (char)(rlk_i + ALPHABET_BEGINNING);

	strcpy(data_two.rlk_strArray[0], "Welcome !!!");
	strcpy(data_two.rlk_strArray[1], "This");
	strcpy(data_two.rlk_strArray[2], "Is");
	strcpy(data_two.rlk_strArray[3], "ASTROMEDICOMP");
	strcpy(data_two.rlk_strArray[4], "R");
	strcpy(data_two.rlk_strArray[5], "T");
	strcpy(data_two.rlk_strArray[6], "R");
	strcpy(data_two.rlk_strArray[7], "Batch");
	strcpy(data_two.rlk_strArray[8], "Of");
	strcpy(data_two.rlk_strArray[9], "2021");

	printf("\n\n");
	printf("Members Of 'struct DataOne' Alongwith Their Assigned Values Are : \n\n");
	
	printf("\n\n");
	
	printf("Integer Array (data_one.iArray[]) : \n\n");
	
	for (rlk_i = 0; rlk_i < INT_ARRAY_SIZE; rlk_i++)
	
	printf("data_one.iArray[%d] = %d\n", rlk_i, data_one.rlk_iArray[rlk_i]);
	
	printf("\n\n");
	
	printf("Floating-Point Array (data_one.fArray[]) : \n\n");
	
	for (rlk_i = 0; rlk_i < FLOAT_ARRAY_SIZE; rlk_i++)
	
	printf("data_one.fArray[%d] = %f\n", rlk_i, data_one.rlk_fArray[rlk_i]);

	
	printf("\n\n");
	
	printf("Members Of 'struct DataTwo' Alongwith Their Assigned Values Are : \n	\n");
	
	printf("\n\n");
	
	printf("Character Array (data_two.cArray[]) : \n\n");
	
	for (rlk_i = 0; rlk_i < CHAR_ARRAY_SIZE; rlk_i++)
	
	printf("data_two.cArray[%d] = %c\n", rlk_i, data_two.rlk_cArray[rlk_i]);
	
	printf("\n\n");
	

	printf("String Array (data_two.strArray[]) : \n\n");
	
	for (rlk_i = 0; rlk_i < NUM_STRINGS; rlk_i++)
	
	printf("%s ", data_two.rlk_strArray[rlk_i]);
	
	printf("\n\n");
	
	return(0);
}

