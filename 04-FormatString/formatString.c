#include<stdio.h>
int main(void)
{
	//code
	printf("\n\n");
	printf("**********************************************");
	printf("\n\n");

	printf("Hello World!!!\n\n");

	int rlk_a = 13;
	printf("Integer Decimal value of 'a' = %d\n",rlk_a);
	printf("Integer octal value of 'a'= %o\n", rlk_a);
	printf("Integer Hexadecimal value Of 'a' (hexadecimal leters in lower case) = %x\n",rlk_a);
	printf("Integer Hexadecimal value Of 'a' (hexadecimal letters in lower case) = %X\n\n",rlk_a);

	char rlk_ch = 'A';
	printf("character ch=%c\n", rlk_ch);
	char str[] = "AstromediComp's Real Time Rendering Batch";
	printf("string str=%s\n\n", str);

	long rlk_num = 30121995L;
	printf("long Integer =%ld\n\n", rlk_num);

	unsigned int rlk_b = 7;
	printf("Unsigned Integer 'b'=%u\n\n", rlk_b);

	float f_num = 3012.1995f;
	printf("floating point number with just %%f 'f_num'=%f\n", f_num);
	printf("floating point number with just %%4 'f_num'=%4.2f\n", f_num);
	printf("floating point number with just %%6.5 'f_num'=%6.5f\n", f_num);

	double d_pi = 3.141596;
	printf("Double Precision Floating Point Number Without Exponential = %g\n", d_pi);
	printf("Double Precision Floating Point Number With Exponential (Lower Case) = %e\n", d_pi);
	printf("Double Precision Floating Point Number With Exponential (Upper Case) = %E\n\n", d_pi);
	printf("Double Hexadecimal Value Of 'd_pi' (Hexadecimal Letters In Lower Case) = %a\n", d_pi);
	printf("Double Hexadecimal Value Of 'd_pi' (Hexadecimal Letters In Upper Case) = %A\n\n", d_pi);

	printf("**********************************************************\n");
	printf("\n\n");
	return(0);

}
