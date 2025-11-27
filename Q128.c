#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;
    FILE *f = fopen("student.dat", "w");
    scanf("%s %d %f", s.name, &s.age, &s.marks);
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);

    f = fopen("student.dat", "r");
    fread(&s, sizeof(s), 1, f);
    printf("%s %d %.2f", s.name, s.age, s.marks);
    fclose(f);
    return 0;
}
