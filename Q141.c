#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    Student s;
    scanf("%s %d", s.name, &s.age);
    printf("%s %d", s.name, s.age);
    return 0;
}
