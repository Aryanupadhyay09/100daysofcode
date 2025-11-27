#include <stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    char name[50];
    struct Address addr;
};

int main() {
    struct Student s;
    scanf("%s %s %d", s.name, s.addr.city, &s.addr.pincode);
    printf("%s %s %d", s.name, s.addr.city, s.addr.pincode);
    return 0;
}
