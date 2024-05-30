/*
	Write a C program that takes N integer numbers from the
	user and print how many odd and even numbers are there.
*/


#include<stdio.h>
int main()
{
	int N;
	
	printf("How many number do you wanna take : ");
	scanf("%d", &N);
	
	int i;
	int value;
	int even = 0;
	int odd = 0;
	
	for(i=1; i<=N; i++)
	{
		printf("Enter a number : ");
		scanf("%d", &value);
		
		if(value%2==0) even++;
		else odd++;
	}
	
	printf("even:odd = %d:%d", even, odd);
	
	return 0;
}
