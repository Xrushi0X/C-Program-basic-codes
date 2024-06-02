#include<stdio.h>
#include<conio.h>
#define CHAR_ALPHABET_UPPER_CASE_BEGINNIG 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90
#define CHAR_ALPHABET_LOWER_CASE_BEGINNIG 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	//variable dec
	char rlk_ch;
	int rlk_ch_value;

	//code
	printf("\n\n");
	printf("Enter Character :");
	rlk_ch = getch();
	printf("\n\n");

	if ((rlk_ch == 'A' || rlk_ch == 'a') || (rlk_ch == 'E' || rlk_ch == 'e') || (rlk_ch == 'I' || rlk_ch == 'i') || (rlk_ch == 'O' || rlk_ch == 'o') || (rlk_ch == 'U' || rlk_ch == 'u'))
	{
		printf("Character \'%c\' Entered By You Is A Vowel CHARACTER From The English Alphabet !!!\n\n", rlk_ch);

	}

	else
	{
		rlk_ch_value = (int)rlk_ch;

		if ((rlk_ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNIG && rlk_ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (rlk_ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNIG && CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered By You, Is A CONSONANT CHARACTER From The English Alphabet !!!!\n\n\n", rlk_ch); 
		}
		else if (rlk_ch_value >= CHAR_DIGIT_BEGINNING && rlk_ch_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You ,Is A Digit Character !!! \n\n",rlk_ch);
		}
		else
		{
			printf("Character \'%c\'Entered By You Is A Special Character !!! \n\n", rlk_ch);

		}

	}
	return(0);
}


