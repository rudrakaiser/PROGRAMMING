#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
    char str[1000];
    gets(str);
    strlwr(str);
    int i, vowel = 0, consonant = 0;
    for(i=0; i<strlen(str); i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') vowel++;
        else if(isalpha(str[i])) consonant ++;
    }
    printf("%d",abs(vowel-consonant));
    return 0;
}