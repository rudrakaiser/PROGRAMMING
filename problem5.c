/*
	Write a C program to check whether a number is divisible by 3 and 7 or
	not. If the number is divisible by 3 then print "n is divisible by 3"
	(here n is user's number). If the number is divisible by 7 then print
	"n is divisible by 7" or print "n is not divisible by 3 or 7"
*/

#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	if(n%3==0) printf("%d is divisible by 3\n",n);
	
	if(n%7==0) printf("%d is divisible by 7\n",n);
	
	if(n%3!=0 && n%7!=0) printf("%d is not divisible by 3 or 7\n",n);
	
	return 0;
}
