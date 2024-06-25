#include<stdio.h>

int main()
{
	char first, second, third;

	printf("Enter the 1st 2nd and 3rd character  : ");
	scanf("%c %c %c", &first, &second, &third);

	printf("The Reverse of '%c%c%c' is '%c%c%c'", first, second, third, third, second, first);

	return 0;
}
