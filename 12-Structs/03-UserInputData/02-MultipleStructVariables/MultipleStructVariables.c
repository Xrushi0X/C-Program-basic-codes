#include <stdio.h>
struct MyPoint
{
	int rlk_x;
	int rlk_y;
};
int main(void)
{
	//variable declarations
	struct MyPoint point_A, point_B, point_C, point_D, point_E; 
		//code

		printf("\n\n");
	printf("Enter X-Coordinate For Point 'A' : ");
	scanf("%d", &point_A.rlk_x);
	
	printf("Enter Y-Coordinate For Point 'A' : ");
	scanf("%d", &point_A.rlk_y);

	printf("\n\n");
	printf("Enter X-Coordinate For Point 'B' : ");
	scanf("%d", &point_B.rlk_x);
	
	printf("Enter Y-Coordinate For Point 'B' : ");
	scanf("%d", &point_B.rlk_y);

	printf("\n\n");
	printf("Enter X-Coordinate For Point 'C' : ");
	scanf("%d", &point_C.rlk_x);
	
	printf("Enter Y-Coordinate For Point 'C' : ");
	scanf("%d", &point_C.rlk_y);

	printf("\n\n");
	printf("Enter X-Coordinate For Point 'D' : ");
	scanf("%d", &point_D.rlk_x);
	
	printf("Enter Y-Coordinate For Point 'D' : ");
	scanf("%d", &point_D.rlk_y);

	printf("\n\n");
	printf("Enter X-Coordinate For Point 'E' : ");
	scanf("%d", &point_E.rlk_x);
	
	printf("Enter Y-Coordinate For Point 'E' : ");
	scanf("%d", &point_E.rlk_y);

	printf("\n\n");

	printf("Co-ordinates (x, y) Of Point 'A' Are : (%d, %d)\n\n", point_A.rlk_x,point_A.rlk_y);
	printf("Co-ordinates (x, y) Of Point 'B' Are : (%d, %d)\n\n", point_B.rlk_x,point_B.rlk_y);
	printf("Co-ordinates (x, y) Of Point 'C' Are : (%d, %d)\n\n", point_C.rlk_x,point_C.rlk_y);
	printf("Co-ordinates (x, y) Of Point 'D' Are : (%d, %d)\n\n", point_D.rlk_x,point_D.rlk_y);
	printf("Co-ordinates (x, y) Of Point 'E' Are : (%d, %d)\n\n", point_E.rlk_x,point_E.rlk_y);
	return(0);


}

