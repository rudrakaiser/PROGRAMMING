#include<stdio.h>

int main()
{
	int number;
	
	printf("Enter a number = ");
	scanf("%d", &number);
	
	if(number>0)
	{
		if(number%2==0)
		{
			printf("The number is EVEN and a Positive number");
		}
		else
		{
			printf("The number is ODD and a Positive number");
		}
	}
	else if(number==0)
	{
		printf("The number is EVEN but just a number");
	}
	else
	{
		if(number%2==0)
		{
			printf("The number is EVEN and a Negative number");
		}
		else
		{
			printf("The number is ODD and a Negative number");
		}
	}

	return 0;
}
