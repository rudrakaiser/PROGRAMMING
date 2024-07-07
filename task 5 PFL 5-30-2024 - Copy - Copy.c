/*
	Write a C program that takes a value from the user and
	prints how many even and odd digits there are.
*/


#include<stdio.h>
int main()
{
	int value, loop, even = 0, odd = 0;
	
	printf("Enter a value : ");
	scanf("%d", &value);
	
	printf("Digits : ");
	
	while(value!=0)
	{
		printf("%d ", value%10);
		
		if((value%10)%2==0) even++;
		else odd++;
		
		value = value/10;
	}
	
	printf("\nEven = %d\nOdd = %d", even, odd);
	
	return 0;
}
