#include<stdio.h>

int main()
{
	int loop;
	
	for(loop=1; loop<=9; loop++)
	{
		printf("%d   ", loop);
		
		if(loop%3==0)
		{
			printf("\n");
		}
	}

	return 0;
}
