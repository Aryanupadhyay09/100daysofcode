#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, max = 0, idx = 0;
    scanf("%d", &n);
    struct Student s[n];
    for(int i=0;i<n;i++) {
        scanf("%s %d", s[i].name, &s[i].marks);
        if(s[i].marks > max) {
            max = s[i].marks;
            idx = i;
        }
    }
    printf("%s %d", s[idx].name, s[idx].marks);
    return 0;
}
