#include<stdio.h>

void main()
{
	int height = 7 , width;
	
	printf("The height of the rectangular is = 7\n");
	
	printf("The width of the rectangular is  = ");
	scanf("%d", &width);
	
	int Perimeter = (height + height) + (width + width);
	int Area = height * width;
	
	printf("The Perimeter of the rectangle   = %d inches\n", Perimeter);
	printf("The Area of the rectangle        = %d square inches", Area);
}
