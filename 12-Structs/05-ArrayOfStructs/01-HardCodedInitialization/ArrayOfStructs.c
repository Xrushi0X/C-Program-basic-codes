#include <stdio.h>
#define NAME_LENGTH 100
#define MARITAL_STATUS 10
struct Employee
{
	char rlk_name[NAME_LENGTH];
	int rlk_age;
	float rlk_salary;
	char rlk_sex;
	char rlk_marital_status[MARITAL_STATUS];
};

int main(void)

{

	//variable delarations
	struct Employee EmployeeRecord[5];

		char employee_rajesh[] = "Rajesh";
	char employee_sameer[] = "Sameer";
	char employee_kalyani[] = "Kalyani";
	char employee_sonali[] = "Sonali";
	char employee_shantanu[] = "Shantanu";
	int rlk_i;
	//code
	
	strcpy(EmployeeRecord[0].rlk_name, employee_rajesh);
	EmployeeRecord[0].rlk_age = 30;
	EmployeeRecord[0].rlk_sex = 'M';
	EmployeeRecord[0].rlk_salary = 50000.0f;
	strcpy(EmployeeRecord[0].rlk_marital_status, "Unmarried");
	
	strcpy(EmployeeRecord[1].rlk_name, employee_sameer);
	EmployeeRecord[1].rlk_age = 32;
	EmployeeRecord[1].rlk_sex = 'M';
	EmployeeRecord[1].rlk_salary = 60000.0f;
	strcpy(EmployeeRecord[1].rlk_marital_status, "Married");

	strcpy(EmployeeRecord[2].rlk_name, employee_kalyani);
	EmployeeRecord[2].rlk_age = 29;
	EmployeeRecord[2].rlk_sex = 'F';
	EmployeeRecord[2].rlk_salary = 62000.0f;
	strcpy(EmployeeRecord[2].rlk_marital_status, "Unmarried");
	
	strcpy(EmployeeRecord[3].rlk_name, employee_sonali);
	EmployeeRecord[3].rlk_age = 33;
	EmployeeRecord[3].rlk_sex = 'F';
	EmployeeRecord[3].rlk_salary = 50000.0f;
	strcpy(EmployeeRecord[3].rlk_marital_status, "Married");
	
	strcpy(EmployeeRecord[4].rlk_name, employee_shantanu);
	EmployeeRecord[4].rlk_age = 35;
	EmployeeRecord[4].rlk_sex = 'M';
	EmployeeRecord[4].rlk_salary = 55000.0f;
	strcpy(EmployeeRecord[4].rlk_marital_status, "Married");
	
	printf("\n\n");
	printf("****** DISPLAYING EMPLOYEE RECORDS ******\n\n");
	for (rlk_i = 0; rlk_i < 5; rlk_i++)
	{
		printf("****** EMPLOYEE NUMBER %d ******\n\n", (rlk_i + 1));
		printf("Name : %s\n", EmployeeRecord[rlk_i].rlk_name);
		printf("Age : %d years\n", EmployeeRecord[rlk_i].rlk_age);
		if (EmployeeRecord[rlk_i].rlk_sex == 'M' || EmployeeRecord[rlk_i].rlk_sex == 'm')
			printf("Sex : Male\n");
		else
			printf("Sex : Female\n");
		printf("Salary : Rs. %f\n", EmployeeRecord[rlk_i].rlk_salary);
		printf("Marital Status : %s\n", EmployeeRecord[rlk_i].rlk_marital_status);
		printf("\n\n");
	}

	return(0);
}
