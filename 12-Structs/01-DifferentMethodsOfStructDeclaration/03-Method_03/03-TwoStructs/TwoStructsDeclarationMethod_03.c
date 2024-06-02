#include <stdio.h>
int main(void)
{
	//DEFINING STRUCT
	struct MyPoint
	{
		int rlk_x;
		int rlk_y;
	} point; 
	//DEFINING STRUCT
	struct MyPointProperties
	{
		int rlk_quadrant;
		char rlk_axis_location[10];
	} point_properties; 
		//code
	
		printf("\n\n");
	printf("Enter X-Coordinate For A Point : ");
	scanf("%d", &point.rlk_x);
	printf("Enter Y-Coordinate For A Point : ");
	scanf("%d", &point.rlk_y);
	printf("\n\n");
	printf("Point Co-ordinates (x, y) Are : (%d, %d) !!!\n\n", point.rlk_x, point.rlk_y);
	if (point.rlk_x == 0 && point.rlk_y == 0)
		printf("The Point Is The Origin (%d, %d) !!!\n", point.rlk_x, point.rlk_y);
	else 
	{
		if (point.rlk_x == 0)
		{
			if (point.rlk_y < 0)
				strcpy(point_properties.rlk_axis_location, "Negative Y");
			if (point.rlk_y > 0)
				strcpy(point_properties.rlk_axis_location, "Positive Y");
			point_properties.rlk_quadrant = 0;
			printf("The Point Lies On The %s Axis !!!\n\n",point_properties.rlk_axis_location);

		}
		else if (point.rlk_y == 0)
		{

		if (point.rlk_x < 0)
strcpy(point_properties.rlk_axis_location, "Negative X");
if (point.rlk_x > 0) 
strcpy(point_properties.rlk_axis_location, "Positive X");
point_properties.rlk_quadrant = 0;
printf("The Point Lies On The %s Axis !!!\n\n",point_properties.rlk_axis_location);
		}
		else 
		{
			point_properties.rlk_axis_location[0] = '\0';
				if (point.rlk_x > 0 && point.rlk_y > 0)
					point_properties.rlk_quadrant = 1;
				else if (point.rlk_x < 0 && point.rlk_y > 0)
					point_properties.rlk_quadrant = 2;
				else if (point.rlk_x < 0 && point.rlk_y < 0)
					point_properties.rlk_quadrant = 3;
				else 
				point_properties.rlk_quadrant = 4;
			printf("The Point Lies In Quadrant Number %d !!!\n\n",point_properties.rlk_quadrant);
		}
	}
	return(0);
}
