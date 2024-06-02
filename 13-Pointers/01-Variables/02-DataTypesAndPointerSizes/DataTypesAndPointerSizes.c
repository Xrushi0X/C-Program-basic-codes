#include <stdio.h>
struct rlk_Employee
{
	char rlk_name[100];
	int rlk_age;
	float rlk_salary;
	char rlk_sex;
	char rlk_marital_status;
};
int main(void)
{
	//code
printf("\n\n");

printf("SIZES OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE :\n\n");

printf("Size of (int) : %d \t \t \t Size of pointer to int(int*) : % d\n\n", sizeof(int), sizeof(int*)); printf("Size of (float) : %d \t \t \t Size of pointer to float	(float*) : % d\n\n", sizeof(float), sizeof(float*));

printf("Size of (double) : %d \t \t \t Size of pointer to double	(double*) : % d\n\n", sizeof(double), sizeof(double*));

printf("Size of (char) : %d \t \t \t Size of pointer to char	(char*) : % d\n\n", sizeof(char), sizeof(char*));

printf("Size of (struct Employee) : %d \t \t Size of pointer to structEmployee(struct Employee*) : % d\n\n", sizeof(struct rlk_Employee), sizeof(struct rlk_Employee*));
	
	return(0);

}
