#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student a, b;
    scanf("%s %d", a.name, &a.age);
    scanf("%s %d", b.name, &b.age);
    if(strcmp(a.name, b.name) == 0 && a.age == b.age)
        printf("Same");
    else
        printf("Different");
    return 0;
}
