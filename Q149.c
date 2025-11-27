#include <stdio.h>

struct Company {
    char cname[50];
    char city[50];
};

struct Employee {
    char ename[50];
    int age;
    struct Company comp;
};

int main() {
    struct Employee e;
    scanf("%s %d %s %s", e.ename, &e.age, e.comp.cname, e.comp.city);
    printf("%s %d %s %s", e.ename, e.age, e.comp.cname, e.comp.city);
    return 0;
}
