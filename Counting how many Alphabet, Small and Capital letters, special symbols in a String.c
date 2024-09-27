#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[1000];
    gets(str);
    int i, alpha=0, capital=0, small=0, digit=0, special=0;
    for(i=0; i<strlen(str); i++) {
        if(isalpha(str[i]))
        {
            alpha++;
            if(isupper(str[i])) capital++;
            else small++;
        }
        else if(isdigit(str[i])) digit++;
        else special++;
    }
    printf("Total letters   = %d \n", alpha);
    printf("Capital letters = %d \n", capital);
    printf("Small letters   = %d \n", small);
    printf("Total digits    = %d \n", digit);
    printf("Special Symbols = %d \n", special);
    return 0;
}