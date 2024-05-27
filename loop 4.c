#include<stdio.h>

int main(){
    int start, interval, term, loop, result=0;
    
    /*
    	Here i took the variable 'result' for storing the total sum of the
    	series that i'm gonna print to the console
    */
    
    printf("Start    = ");
    scanf("%d", &start); // taking input for starting value of the series
    
    printf("Interval = ");
    scanf("%d", &interval); // taking input for the interval of the series
    
    printf("Term     = ");
    scanf("%d", &term); // taking input for the term of the series
    
    printf("\n"); // taking a new line (not mandatory)
    
    for(loop=1; loop<=term; loop++)
    {
        printf("%d ", start);
        
        if(loop < term) // if 'loop' less than 'term' then it will print '+'
        {
            printf("+ ");
        }
        
        result = result + start;
        
        if(loop==term) // if 'loop' is equal to the 'term' then it will print '='
        {
            printf("= %d", result);
        }
        
        start = start + interval;
    }
    
	return 0;
}
