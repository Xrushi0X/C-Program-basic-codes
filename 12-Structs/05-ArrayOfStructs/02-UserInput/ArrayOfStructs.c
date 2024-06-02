#include <stdio.h>
#include <ctype.h>
#define NUM_EMPLOYEES 5 
#define NAME_LENGTH 100
#define MARITAL_STATUS 10
struct Employee
{
	char rlk_name[NAME_LENGTH];
	int rlk_age;
	char rlk_sex;
	float rlk_salary;
	char rlk_marital_status;
};
int main(void)
{
	//function prototype
	void MyGetString(char[], int);
	//variable delarations
	struct Employee EmployeeRecord[NUM_EMPLOYEES]; 
	
		int rlk_i;
	//code

	for (rlk_i = 0; rlk_i < NUM_EMPLOYEES; rlk_i++)
	{
		printf("\n\n\n\n");
		printf("********** DATA ENTRY FOR EMPLOYEE NUMBER %d **********\n", (rlk_i+1));
		printf("\n\n");
		printf("Enter Employee Name : ");
		MyGetString(EmployeeRecord[rlk_i].rlk_name, NAME_LENGTH);
		printf("\n\n\n");
		printf("Enter Employee's Age (in years) : ");
		scanf("%d", &EmployeeRecord[rlk_i].rlk_age);
		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
		EmployeeRecord[rlk_i].rlk_sex = getch();
		printf("%c", EmployeeRecord[rlk_i].rlk_sex);
		EmployeeRecord[rlk_i].rlk_sex = toupper(EmployeeRecord[rlk_i].rlk_sex);
		printf("\n\n\n");
		printf("Enter Employee's Salary (in Indian Rupees) : ");
		scanf("%f", &EmployeeRecord[rlk_i].rlk_salary);
		printf("\n\n");
		printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
		EmployeeRecord[rlk_i].rlk_marital_status = getch();
		printf("%c", EmployeeRecord[rlk_i].rlk_marital_status);
		EmployeeRecord[rlk_i].rlk_marital_status = toupper(EmployeeRecord[rlk_i].rlk_marital_status);
	}
	
	printf("\n\n\n\n");
	printf("********** DISPLAYING EMPLOYEE RECORDS **********\n\n");
	for (rlk_i = 0; rlk_i < NUM_EMPLOYEES; rlk_i++)
	{
		printf("*********** EMPLOYEE NUMBER %d **********\n\n", (rlk_i + 1));
		printf("Name : %s\n", EmployeeRecord[rlk_i].rlk_name);
		printf("Age : %d years\n", EmployeeRecord[rlk_i].rlk_age);
		if (EmployeeRecord[rlk_i].rlk_sex == 'M')
			printf("Sex : Male\n");
		else if (EmployeeRecord[rlk_i].rlk_sex == 'F')
			printf("Sex : Female\n");
		else
			printf("Sex : Invalid Data Entered\n");
		printf("Salary : Rs. %f\n", EmployeeRecord[rlk_i].rlk_salary);
		if (EmployeeRecord[rlk_i].rlk_marital_status == 'Y')
			printf("Marital Status : Married\n");
		else if (EmployeeRecord[rlk_i].rlk_marital_status == 'N')
			printf("Marital Status : Unmarried\n");
		else
			printf("Marital Status : Invalid Data Entered\n");
		printf("\n\n");
	}
	return(0);
}

void MyGetString(char str[], int str_size)
{
	//variable declarations
	int i;
	char ch = '\0';
	//code
	i = 0;
	do
	{
		ch = getch();
		str[i] = ch;
		printf("%c", str[i]);
		i++;
	} while ((ch != '\r') && (i < str_size));
	if (i == str_size)
		str[i - 1] = '\0';
	else
		str[i] = '\0';
}