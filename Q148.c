#include <stdio.h>

struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    struct Car c;
    scanf("%s %d %f", c.model, &c.year, &c.price);
    printf("%s %d %.2f", c.model, c.year, c.price);
    return 0;
}
