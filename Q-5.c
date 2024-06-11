#include<stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() 
{
    int N; 
    printf("Enter the number of books: ");
    scanf("%d", &N);

    struct Book books[N];

    for (int i = 0; i < N; ++i) 
	{
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Title: ");
        
        scanf(" %[^\n]", books[i].title); 
        printf("Author: ");
        
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        
        scanf("%f", &books[i].price);
    }

    printf("\nBook Details:\n");
    for (int i = 0; i < N; ++i) 
	{
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: $%.2f\n", books[i].price);
    }  
}
