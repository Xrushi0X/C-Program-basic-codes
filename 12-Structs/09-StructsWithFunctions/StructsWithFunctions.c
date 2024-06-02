#include <stdio.h>
// DEFINING STRUCT
struct MyData
{
	int rlk_i;
	float rlk_f;
	double rlk_d;
	char rlk_c;
};
int main(void)
{
	//function prototype
	struct MyData AddStructMembers(struct MyData, struct MyData, struct MyData);
	//variable declarations
	struct MyData rlk_data1, rlk_data2, rlk_data3, rlk_answer_data;
	//code
	// *** data1 ***
	printf("\n\n\n\n");
	printf("********** DATA 1 **********\n\n");
	printf("Enter Integer Value For 'i' Of 'struct MyData data1' : ");
	scanf("%d", &rlk_data1.rlk_i);
	printf("\n\n");
	printf("Enter Floating-Point Value For 'f' Of 'struct MyData data1' : ");
	scanf("%f", &rlk_data1.rlk_f);
	printf("\n\n");
	printf("Enter 'Double' Value For 'd' Of 'struct MyData data1' : ");
	scanf("%lf", &rlk_data1.rlk_d);
	printf("\n\n");
	printf("Enter Character Value For 'c' Of 'struct MyData data1' : ");
	rlk_data1.rlk_c = getch();
	printf("%c", rlk_data1.rlk_c);
	// *** data2 ***
	printf("\n\n\n\n");
	printf("********** DATA 2 **********\n\n");
	printf("Enter Integer Value For 'i' Of 'struct MyData data2' : ");
	scanf("%d", &rlk_data2.rlk_i);
	printf("\n\n");
	printf("Enter Floating-Point Value For 'f' Of 'struct MyData data2' : ");
	scanf("%f", &rlk_data2.rlk_f);
	printf("\n\n");
	printf("Enter 'Double' Value For 'd' Of 'struct MyData data2' : ");
	scanf("%lf", &rlk_data2.rlk_d);
	printf("\n\n");
	printf("Enter Character Value For 'c' Of 'struct MyData data2' : ");
	rlk_data2.rlk_c = getch();
	printf("%c", rlk_data2.rlk_c);
	// *** data3 ***
	printf("\n\n\n\n");
	printf("********** DATA 3 **********\n\n");
	printf("Enter Integer Value For 'i' Of 'struct MyData data3' : ");
	scanf("%d", &rlk_data3.rlk_i);
	printf("\n\n");
	printf("Enter Floating-Point Value For 'f' Of 'struct MyData data3' : ");
	scanf("%f", &rlk_data3.rlk_f);
	printf("\n\n");
	printf("Enter 'Double' Value For 'd' Of 'struct MyData data3' : ");
	scanf("%lf", &rlk_data3.rlk_d);
	printf("\n\n");
	printf("Enter Character Value For 'c' Of 'struct MyData data3' : ");
	rlk_data3.rlk_c = getch();
	printf("%c", rlk_data3.rlk_c);

	rlk_answer_data = AddStructMembers(rlk_data1, rlk_data2, rlk_data3);
	printf("\n\n\n\n");
	printf("********** ANSWER *********\n\n");
	printf("answer_data.i = %d\n", rlk_answer_data.rlk_i);
	printf("answer_data.f = %f\n", rlk_answer_data.rlk_f);
	printf("answer_data.d = %lf\n\n", rlk_answer_data.rlk_d);
	rlk_answer_data.rlk_c = rlk_data1.rlk_c;
	printf("answer_data.c (from data1) = %c\n\n", rlk_answer_data.rlk_c);
	rlk_answer_data.rlk_c = rlk_data2.rlk_c;
	printf("answer_data.c (from data2) = %c\n\n", rlk_answer_data.rlk_c);
	rlk_answer_data.rlk_c = rlk_data3.rlk_c;
	printf("answer_data.c (from data3) = %c\n\n", rlk_answer_data.rlk_c);
	return(0);
}
struct MyData AddStructMembers(struct MyData md_one, struct MyData md_two, struct
	MyData md_three)
{
	//variable declarations
	struct MyData answer;
	//code
	answer.rlk_i = md_one.rlk_i + md_two.rlk_i + md_three.rlk_i;
	answer.rlk_f = md_one.rlk_f + md_two.rlk_f + md_three.rlk_f;
	answer.rlk_d = md_one.rlk_d + md_two.rlk_d + md_three.rlk_d;
	return(answer);
}
