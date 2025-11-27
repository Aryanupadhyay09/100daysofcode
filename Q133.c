#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;
    scanf("%s %d %f", s.name, &s.age, &s.marks);
    printf("%s %d %.2f", s.name, s.age, s.marks);
    return 0;
}
