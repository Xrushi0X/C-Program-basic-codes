#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_STRING_LENGTH 1024
struct CharacterCount
{
char rlk_ch;
int rlk_ch_count;
} character_and_count[] = { { 'A', 0 }, 
                            { 'B', 0 }, 
							{ 'C', 0 }, 
							{ 'D', 0 }, 
							{ 'E', 0 }, 
							{ 'F', 0 },
							{ 'G', 0 },
							{ 'H', 0 },
							{ 'I', 0 },
							{ 'J', 0 },
							{ 'K', 0 },
							{ 'L', 0 },
							{ 'M', 0 },
							{ 'N', 0 },
							{ 'O', 0 },
							{ 'P', 0 },
							{ 'Q', 0 },
							{ 'R', 0 },
							{ 'S', 0 },
							{ 'T', 0 },
							{ 'U', 0 },
							{ 'V', 0 },
							{ 'W', 0 },
							{ 'X', 0 },
							{ 'Y', 0 },
							{ 'Z', 0 }}; 

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(character_and_count)
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS sizeof(character_and_count[0])
#define NUM_ELEMENTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS /SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS)
// ENTRY POINT FUNCTION
int main(void)
{

char str[MAX_STRING_LENGTH];
int rlk_i, rlk_j, rlk_actual_string_length = 0;
//code
printf("\n\n");
printf("Enter A String : \n\n");
gets_s(str, MAX_STRING_LENGTH);
rlk_actual_string_length = strlen(str);
printf("\n\n");
printf("The String You Have Entered Is : \n\n");
printf("%s\n\n", str);
for (rlk_i = 0; rlk_i < rlk_actual_string_length; rlk_i++)
{
for (rlk_j = 0; rlk_j < NUM_ELEMENTS_IN_ARRAY; rlk_j++)

{
	str[rlk_i] = toupper(str[rlk_i]);

if (str[rlk_i] == character_and_count[rlk_j].rlk_ch)
character_and_count[rlk_j].rlk_ch_count++;
}
}
printf("\n\n");
printf("The Number Of Occurences Of ALL Characters From The Alphabet Are As Follows : \n\n");
for (rlk_i = 0; rlk_i < NUM_ELEMENTS_IN_ARRAY; rlk_i++)
{
printf("Character %c = %d\n", character_and_count[rlk_i].rlk_ch,character_and_count[rlk_i].rlk_ch_count);
}
printf("\n\n");
return(0);

 }


