#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s[3];
    for(int i=0;i<3;i++)
        scanf("%s %d %f", s[i].name, &s[i].age, &s[i].marks);

    for(int i=0;i<3;i++)
        printf("%s %d %.2f\n", s[i].name, s[i].age, s[i].marks);

    return 0;
}
