#include<stdio.h>

int main()
{
	int Num1, Num2, Num3;
	
	printf("Enter Three Integer Value : ");
	scanf("%d %d %d", &Num1, &Num2, &Num3);
	
	if(Num1 >= 0) printf("%d is a Positive Number\n", Num1);
	else printf("%d is a Negative Number\n", Num1);
	
	if(Num2 >= 0) printf("%d is a Positive Number\n", Num2);
	else printf("%d is a Negative Number\n", Num2);
	
	if(Num3 >= 0) printf("%d is a Positive Number\n", Num3);
	else printf("%d is a Negative Number\n", Num3);
	
	return 0;
}
