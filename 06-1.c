#include<stdio.h>

int main()
{
	int n1, n2, n3, n4;
	printf("Enter Four Number : ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	int max;
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			if(n1>n4)
			{
				max = n1;
			}
			else
			{
				max = n4;
			}
		}
		else
		{
			if(n3>n4)
			{
				max = n3;
			}
			else
			{
				max = n4;
			}
		}
	}
	else
	{
		if(n2>n3)
		{
			if(n2>n4)
			{
				max = n2;
			}
			else
			{
				max = n4;
			}
		}
		else
		{
			if(n3>n4)
			{
				max = n3;
			}
			else
			{
				max = n4;
			}
		}
	}
	
	int min;
	
	if(n1<n2)
	{
		if(n1<n3)
		{
			if(n1<n4)
			{
				min = n1;
			}
			else
			{
				min = n4;
			}
		}
		else
		{
			if(n3<n4)
			{
				min = n3;
			}
			else
			{
				min = n4;
			}
		}
	}
	else
	{
		if(n2<n3)
		{
			if(n2<n4)
			{
				min = n2;
			}
			else
			{
				min = n4;
			}
		}
		else
		{
			if(n3<n4)
			{
				min = n3;
			}
			else
			{
				min = n4;
			}
		}
	}
	
	printf("The Maximum Value is %d\n",max);
	printf("The Minimum Value is %d",min);

	return 0;
}
