#include <stdio.h>

struct Emp {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Emp e;
    scanf("%d %s %f", &e.id, e.name, &e.salary);
    printf("%d %s %.2f", e.id, e.name, e.salary);
    return 0;
}
