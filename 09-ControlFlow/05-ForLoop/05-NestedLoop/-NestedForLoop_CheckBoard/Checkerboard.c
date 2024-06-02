#include <stdio.h>
int main(void)
{

	//variable declarations
    int rlk_i, rlk_j, rlk_c;
    
    //code
    printf("\n\n");
    for (rlk_i = 0; rlk_i < 32; rlk_i++)
    {
        for (rlk_j = 0; rlk_j < 32; rlk_j++)
        {
            rlk_c = ((rlk_i & 0x4) == 0) ^ ((rlk_j & 0x4) == 0);
               
               if (rlk_c == 0)
                   printf("  ");
                    
                 if (rlk_c == 1)
                 printf("* ");
                
                }
       printf("\n\n");
        
        }


    return(0);
}
