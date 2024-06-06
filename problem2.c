/*
	Write a C Program to print a parallel series when
	it starts from 1 and the interval of the series is
	7 and it will continue till 8th term.

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i, a;
    
    for(i=1 , a=1; i<=8; i++ , a=a+7)
    {
        printf("%d ", a);
    }
    
    return 0;
}
