/*
	Write a C program to find sum of all odd numbers between 1 to n
*/

#include<stdio.h>
int main()
{
	int n, i, sum=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i+=2) sum += i;
	
	printf("Sum = %d",sum);
	return 0;
}

/*
	Enter a number : 11
	Sum = 36
	
	Concept : From 1 to 11 all ODD numbers are,
	1, 3, 5, 7, 9, 11 and sum of these all numbers
	1 + 3 + 5 + 7 + 9 + 11 = 36
*/
