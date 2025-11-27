#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s;
    struct Student *p = &s;
    scanf("%s %d", p->name, &p->age);
    printf("%s %d", p->name, p->age);
    return 0;
}
