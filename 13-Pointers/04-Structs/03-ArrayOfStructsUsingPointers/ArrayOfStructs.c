#include <stdio.h>
#include <ctype.h>
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
	struct Employee* pEmployeeRecord = NULL;
	int rlk_num_employees, rlk_i;
	
	
	//code
	
	printf("\n\n");
	printf("Enter Number Of Employees Whose Details You Want To Record : ");
	
	scanf("%d", &rlk_num_employees);
	
	printf("\n\n");
	
	pEmployeeRecord = (struct Employee*)malloc(sizeof(struct Employee) *rlk_num_employees);
	
	if (pEmployeeRecord == NULL)
	{
		printf("FAILED TO ALLOCATED MEMORY FOR %d EMPLOYEES !!! EXITTING NOW \n\n", rlk_num_employees);
			exit(0);
	}
	else
			printf("SUCCESSFULLY ALLOCATED MEMORY FOR %d EMPLOYEES !!!\n\n", rlk_num_employees);


	for (rlk_i = 0; rlk_i < rlk_num_employees; rlk_i++)
	{
		printf("\n\n\n\n");
		printf("** DATA ENTRY FOR EMPLOYEE NUMBER %d ***\n", (rlk_i +1));
		printf("\n\n");
		printf("Enter Employee Name : ");
		MyGetString(pEmployeeRecord[rlk_i].rlk_name, NAME_LENGTH);
	
	printf("\n\n\n");
		printf("Enter Employee's Age (in years) : ");
		scanf("%d", &pEmployeeRecord[rlk_i].rlk_age);
	
	printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
	
	pEmployeeRecord[rlk_i].rlk_sex = getch();

	printf("%c", pEmployeeRecord[rlk_i].rlk_sex);
		pEmployeeRecord[rlk_i].rlk_sex = toupper(pEmployeeRecord[rlk_i].rlk_sex);
		printf("\n\n\n");
	
	printf("Enter Employee's Salary (in Indian Rupees) : ");
		scanf("%f", &pEmployeeRecord[rlk_i].rlk_salary);
		printf("\n\n");
	
	printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
	
	pEmployeeRecord[rlk_i].rlk_marital_status = getch();
	
	printf("%c", pEmployeeRecord[rlk_i].rlk_marital_status);
	
	pEmployeeRecord[rlk_i].rlk_marital_status = toupper(pEmployeeRecord[rlk_i].rlk_marital_status);
	
	}
	

	printf("\n\n\n\n");
	printf("********** DISPLAYING EMPLOYEE RECORDS **********\n\n");
	for (rlk_i = 0; rlk_i < rlk_num_employees; rlk_i++)
	{
		printf("*********** EMPLOYEE NUMBER %d **********\n\n", (rlk_i + 1));
		printf("Name : %s\n", pEmployeeRecord[rlk_i].rlk_name);
	
	printf("Age : %d years\n", pEmployeeRecord[rlk_i].rlk_age);
		if (pEmployeeRecord[rlk_i].rlk_sex == 'M')
			printf("Marital Status : Married\n");
	else if (pEmployeeRecord[rlk_i].rlk_sex == 'F')
			printf("Sex : Female\n");
		else
			printf("Sex : Invalid Data Entered\n");

		printf("Salary : Rs. %f\n", pEmployeeRecord[rlk_i].rlk_salary);
		if (pEmployeeRecord[rlk_i].rlk_marital_status == 'Y')


			printf("Marital Status : Married\n");
		else if (pEmployeeRecord[rlk_i].rlk_marital_status == 'N')
			printf("Marital Status : Unmarried\n");
		else
	
	printf("Marital Status : Invalid Data Entered\n");
		printf("\n\n");	
	}
	if (pEmployeeRecord)
	{
		free(pEmployeeRecord);
		pEmployeeRecord = NULL;
	
	printf("MEMORY ALLOCATED TO %d EMPLOYEES HAS BEEN SUCCESSFULLY FREED !!! \n\n", rlk_num_employees);
	}
	return(0);
}


void MyGetString(char str[], int str_size)
{
	//variable declarations
	int rlk_i;
	char rlk_ch = '\0';
	//code
	rlk_i = 0;
	do
	{
		rlk_ch = getch();
		str[rlk_i] = rlk_ch;
		printf("%c", str[rlk_i]);
		rlk_	i++;
	} while ((rlk_ch != '\r') && (rlk_i < str_size));
	if (rlk_i == str_size)
		str[rlk_i - 1] = '\0';
	else
		str[rlk_i] = '\0';
}