#include <stdio.h>

struct Bank {
    char name[50];
    int acc;
    float bal;
};

int main() {
    struct Bank b;
    scanf("%s %d %f", b.name, &b.acc, &b.bal);
    printf("%s %d %.2f", b.name, b.acc, b.bal);
    return 0;
}
