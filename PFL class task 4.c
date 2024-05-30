/*
	Write a C program that takes a value from the user
	and prints the sum of digits.
*/


#include<stdio.h>
int main()
{
	int value, loop, sum = 0;
	
	printf("\n\tEnter a value : ");
	scanf("%d", &value);
	
	printf("\tDigits : ");
	
	while(value!=0)
	{
		printf("%d ", value%10);
		
		sum = sum + value%10;
		value = value/10;
	}
	
	printf("\n\tSum of digits = %d", sum);
	
	return 0;
}
