#include <stdio.h>
struct Rectangle
{
	struct MyPoint
	{
		int rlk_x;
		int rlk_y;
	} point_01, point_02;
} rect = { {2, 3}, {5, 6} };
int main(void)
{
	//variable declarations
	int rlk_length, rlk_breadth, rlk_area;
	//code
	rlk_length = rect.point_02.rlk_y - rect.point_01.rlk_y;
	if (rlk_length < 0)
		rlk_length = rlk_length * -1;
	rlk_breadth = rect.point_02.rlk_x - rect.point_01.rlk_x;
	if (rlk_breadth < 0)
		rlk_breadth = rlk_breadth * -1;
	rlk_area = rlk_length * rlk_breadth;
	printf("\n\n");
	printf("Length Of Rectangle = %d\n\n", rlk_length);
	printf("Breadth Of Rectangle = %d\n\n", rlk_breadth);
	printf("Area Of Rectangle = %d\n\n", rlk_area);
	return(0);
}
