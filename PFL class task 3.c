/*
	Write a C program that takes a value from the user
	and prints the number of digits.
*/


#include<stdio.h>
int main()
{
	int value, loop, count = 0;
	
	printf("\n\tEnter a value : ");
	scanf("%d", &value);
	
	printf("\tDigits : ");
	
	while(value!=0)
	{
		printf("%d ", value%10);
		
		value = value/10;
		count++;
	}
	
	printf("\n\tTotal %d digits", count);
	
	return 0;
}
