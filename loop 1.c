#include<stdio.h>

void main()
{
	int user_number, loop;
	
	printf("Enter a number : ");
	scanf("%d", &user_number);
	
	for(loop=1; loop<=10; loop++)
	{
		printf("\n%d X %2.0d = %2.0d", user_number, loop, (user_number*loop));
	}
}
