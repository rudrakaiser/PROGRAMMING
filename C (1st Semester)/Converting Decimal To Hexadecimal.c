#include<stdio.h>
int main()
{
	// a string (character array) variable for storing the converted hexadecimal value from decimal value
	char hexa[100];
	
	// two integer variable 'n' is for the decimal value and 'i' is array controller
	int n, i=0;
	
	// here we taking decimal input from the user
	scanf("%d",&n);
	
	//starting loop
	while(n!=0)
	{
		// condition for 1, 2, 3, 4, 5, 6, 7, 8 and 9 digit
		if(n%16 < 10)
		{
			// maintaing the ASCII concept, storing character (0 to 9)
			hexa[i] = 48 + n%16;
		}
		
		// condition for 10, 11, 12, 13, 14 and 15 digit
		else
		{
			// maintaing the ASCII concept, storing character (A to F)
			hexa[i] = 55 + n%16;
		}
		
		// incrementing the array controller variable 'i'
		i++;
		
		// updating the value of 'n' dividing by 16 (base of hexadecimal)
		n = n/16;
	}
	
	// showing the hexadecimal value
	puts(strrev(hexa));
	
	return 0;
}
