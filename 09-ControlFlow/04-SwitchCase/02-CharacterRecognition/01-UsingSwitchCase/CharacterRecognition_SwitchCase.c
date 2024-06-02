#include<stdio.h>
#include<conio.h>
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING	57

int main(void)
{
	//variable dec
	char ch;
	int rlk_ch_value;

	//code
	printf("\n\n");
	printf("ENTER Character : ");
	ch = getch();
	printf("\n\n");

	switch (ch)
	{
		//FALL Through Condition....

	case'A':
	case'a':

	case'E':
	case'e':

	case'I':
	case'i':

	case'O':
	case'o':

	case'U':
	case'u':
			printf("Character \'%c\' Entered By You , Is A VOWEL Character From The English Alphabets !!! \n\n  ", ch); 

			break;

		default:
			rlk_ch_value = (int)ch;
			if ((rlk_ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && rlk_ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (rlk_ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && rlk_ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
			{
				printf("Character \'%c\'Entered By you,Is A constan Character From English Alphabets !!!\n\n ", ch);

			}
			else if (rlk_ch_value >= CHAR_DIGIT_BEGINNING && rlk_ch_value <= CHAR_DIGIT_ENDING)
			{
				printf("Character \'%c\' Is Entered By You Is A DIGIT CHARACTER\n\n", ch);
			}

			else
			{
				printf("Character \'%c\' Is Entered By You Is A SPECIAL CHARACTER !!!!\n\n", ch);
			}
			break;




	}
	printf("Switch Case Block Complete !!!\n");

	return(0);
}

