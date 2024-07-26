#include<stdio.h>
int main()
{
    int total_book, book, total_price = 0;
    scanf("%d", &total_book);

    int book_price;
    float discount = 0;

    for(book=1; book<=total_book; book++)
    {
        scanf("%d", &book_price);
        total_price = total_price + book_price;

        if(book <= 5 && book > 3) discount += (book_price * 0.18);
        else if(book <= 10 && book > 5) discount += (book_price * 0.25);
        else if(book > 10) discount += (book_price * 0.30);
        else discount += (book_price * 0.12);
    }

    total_price = total_price - (int) discount;

    printf("%d TK", total_price);
    return 0;
}
