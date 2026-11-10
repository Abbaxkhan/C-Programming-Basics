// write a program to read books inforamtion and dispaly the books information using structure group


#include <stdio.h>
struct book
{
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main ()
{
    struct book book;
 
 
    printf("Enter book Title,Author,Number of pages and Price: ");
    scanf("%s %s %d %f", book.title, book.author, &book.pages, &book.price);
  
    // scanf("%f", &book.price);

    printf("\nBook Information:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Pages: %d\n", book.pages);
    printf("Price: %.2f\n", book.price);
    printf("Book Information:\n"); 
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Pages: %d\n", book.pages);
    printf("Price: %.2f\n", book.price);



    return 0;
}

