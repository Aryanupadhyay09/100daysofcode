#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n], temp;
    for(int i=0;i<n;i++)
        scanf("%s %d", s[i].name, &s[i].marks);

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(s[j].marks < s[j+1].marks) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }

    for(int i=0;i<n;i++)
        printf("%s %d\n", s[i].name, s[i].marks);

    return 0;
}
