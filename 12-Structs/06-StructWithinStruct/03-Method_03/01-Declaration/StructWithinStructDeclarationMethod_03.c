#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_length, rlk_breadth, rlk_area;
	struct Rectangle
	{
		struct MyPoint
		{
			int rlk_x;
			int rlk_y;
		} point_01, point_02;
	} rlk_rect;
	//code
	printf("\n\n");
	printf("Enter Leftmost X-Coordinate Of Rectangle : ");
	scanf("%d", &rlk_rect.point_01.rlk_x);
	printf("\n\n");
	printf("Enter Bottommost Y-Coordinate Of Rectangle : ");
	scanf("%d", &rlk_rect.point_01.rlk_y);
	printf("\n\n");
	printf("Enter Rightmost X-Coordinate Of Rectangle : ");
	scanf("%d", &rlk_rect.point_02.rlk_x);
	printf("\n\n");
	printf("Enter Topmost Y-Coordinate Of Rectangle : ");
	scanf("%d", &rlk_rect.point_02.rlk_y);
	rlk_length = rlk_rect.point_02.rlk_y - rlk_rect.point_01.rlk_y;
	if (rlk_length < 0)
		rlk_length = rlk_length * -1;
	rlk_breadth = rlk_rect.point_02.rlk_x - rlk_rect.point_01.rlk_x;
	if (rlk_breadth < 0)
		rlk_breadth = rlk_breadth * -1;
	rlk_area = rlk_length * rlk_breadth;
	printf("\n\n");
	printf("Length Of Rectangle = %d\n\n", rlk_length);
	printf("Breadth Of Rectangle = %d\n\n", rlk_breadth);
	printf("Area Of Rectangle = %d\n\n", rlk_area);
	return(0);
}

