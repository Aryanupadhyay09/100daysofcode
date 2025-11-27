#include <stdio.h>

struct Item {
    char name[50];
    int qty;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Item it[n];
    for(int i=0;i<n;i++)
        scanf("%s %d", it[i].name, &it[i].qty);
    for(int i=0;i<n;i++)
        printf("%s %d\n", it[i].name, it[i].qty);
    return 0;
}
