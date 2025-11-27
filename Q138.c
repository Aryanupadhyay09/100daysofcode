#include <stdio.h>

struct Student {
    char name[50];
    int marks[3];
};

int main() {
    struct Student s;
    scanf("%s %d %d %d", s.name, &s.marks[0], &s.marks[1], &s.marks[2]);
    printf("%s %d %d %d", s.name, s.marks[0], s.marks[1], s.marks[2]);
    return 0;
}
