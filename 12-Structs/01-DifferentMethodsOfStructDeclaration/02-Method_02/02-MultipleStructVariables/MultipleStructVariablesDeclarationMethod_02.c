#include <stdio.h>

struct MyPoint
{
	int rlk_x;
	int rlk_y;
};
struct MyPoint point_A, point_B, point_C, point_D, point_E; 

int main(void)
{
	//code

		point_A.rlk_x = 3;
	point_A.rlk_y = 0;


		point_B.rlk_x = 1;
	point_B.rlk_y = 2;

	
		point_C.rlk_x = 9;
	point_C.rlk_y = 6;

	
		point_D.rlk_x = 8;
	point_D.rlk_y = 2;

	
		point_E.rlk_x = 11;
	point_E.rlk_y = 8;
	
	printf("\n\n");
	printf("Co-ordinates (x, y) Of Point 'A' Are : (%d, %d)\n\n", point_A.rlk_x,point_A.rlk_y);
	printf("Co-ordinates (x, y) Of Point 'B' Are : (%d, %d)\n\n", point_B.rlk_x,point_B.rlk_y);
	printf("Co-ordinates (x, y) Of Point 'C' Are : (%d, %d)\n\n", point_C.rlk_x,point_C.rlk_y);
	printf("Co-ordinates (x, y) Of Point 'D' Are : (%d, %d)\n\n", point_D.rlk_x,point_D.rlk_y);
	printf("Co-ordinates (x, y) Of Point 'E' Are : (%d, %d)\n\n", point_E.rlk_x,point_E.rlk_y);
	return(0);
}
