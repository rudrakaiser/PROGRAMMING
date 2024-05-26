#include<stdio.h>

void main()
{
	int value_1, value_2;
	printf("Enter two value : ");
	scanf("%d %d", &value_1, &value_2);
	
	if(value_1 > value_2)
	{
		printf("Max Value = %d\nMin Value = %d\n", value_1, value_2);
	}
	
	else
	{
		printf("Max Value = %d\nMin Value = %d\n", value_2, value_1);
	}
}
