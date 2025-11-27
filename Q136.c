#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void show(struct Student s) {
    printf("%s %d", s.name, s.age);
}

int main() {
    struct Student s;
    scanf("%s %d", s.name, &s.age);
    show(s);
    return 0;
}
