/*
	Write a C program that takes N integer numbers from the
	user and print the maximum and minimum value.
*/


#include<stdio.h>
int main()
{
	int N;
	
	printf("How many number do you wanna take : ");
	scanf("%d", &N);
	
	int loop;
	int value, last_value_for_max, last_value_for_min;
	int maximum;
	int minimum;
	
	for(loop=1; loop<=N; loop++)
	{
		printf("Enter a number : ");
		scanf("%d", &value);
		
		if(loop==1)
		{
			last_value_for_max = last_value_for_min = value;
		}
		else
		{
			if(value > last_value_for_max)
			{
				maximum = value;
				last_value_for_max = value;
			}
			if(value < last_value_for_min)
			{
				minimum = value;
				last_value_for_min = value;
			}
		}
	}
	
	printf("Maximum value = %d\n", maximum);
	printf("Minimum value = %d", minimum);
	
	return 0;
}
