#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;
    scanf("%s %s %f", b.title, b.author, &b.price);
    printf("%s %s %.2f", b.title, b.author, b.price);
    return 0;
}
