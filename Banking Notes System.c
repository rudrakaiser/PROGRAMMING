#include<stdio.h>

int main()
{
    int total_amount;
    printf("Enter the total amount : ");
    scanf("%d", &total_amount);
    
    int note_1000 = 0;
	int note_500 = 0;
    int note_100 = 0;
    int note_50 = 0;
    int note_20 = 0;
    int note_10 = 0;
    int note_5 = 0;
    int note_2 = 0;
    
    note_1000 = total_amount/1000;
    total_amount = total_amount%1000;
    
    if(note_1000 != 0)
    {
    	printf("1000-TK Note = %d\n",note_1000);
    }
    
    note_500 = total_amount/500;
    total_amount = total_amount%500;
    
    if(note_500 != 0)
    {
    	printf("500-TK Note  = %d\n",note_500);
    }
    
    note_100 = total_amount/100;
    total_amount = total_amount%100;
    
    if(note_100 != 0)
    {
    	printf("100-TK Note  = %d\n",note_100);
    }
    
    note_50 = total_amount/50;
    total_amount = total_amount%50;
    
    if(note_50 != 0)
    {
    	printf("50-TK Note   = %d\n",note_50);
    }
    
    note_20 = total_amount/20;
    total_amount = total_amount%20;
    
    if(note_20 != 0)
    {
    	printf("20-TK Note   = %d\n",note_20);
    }
    
    note_10 = total_amount/10;
    total_amount = total_amount%10;
    
    if(note_10 != 0)
    {
    	printf("10-TK Note   = %d\n",note_10);
    }
    
    note_5 = total_amount/5;
    total_amount = total_amount%5;
    
    if(note_5 != 0)
    {
    	printf("5-TK Note    = %d\n",note_5);
    }
    
    note_2 = total_amount/2;
    total_amount = total_amount%2;
    
    if(note_2 != 0)
    {
    	printf("2-TK Note    = %d\n",note_2);
    }
    
    if(total_amount != 0)
    {
    	printf("1-TK Note    = %d\n",total_amount);
    }
	
    return 0;
}
