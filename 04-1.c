#include<stdio.h>

int main()
{
	char character;
	printf("Enter a character : ");
	scanf("%c", &character);
	
	if(character=='a' || character=='A')
	{
		printf("%c is a Vowel", character);
	}
	
	else if(character=='e' || character=='E')
	{
		printf("%c is a Vowel", character);
	}
	
	else if(character=='i' || character=='I')
	{
		printf("%c is a Vowel", character);
	}
	
	else if(character=='o' || character=='O')
	{
		printf("%c is a Vowel", character);
	}
	
	else if(character=='u' || character=='U')
	{
		printf("%c is a Vowel", character);
	}
	
	else
	{
		printf("%c is a Consonant", character);
	}

	return 0;
}
