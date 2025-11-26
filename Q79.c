#include <stdio.h>
int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (int d = 0; d < r + c - 1; d++) {
        int i = d < r ? d : r - 1;
        int j = d - i;
        while (i >= 0 && j < c) {
            printf("%d ", a[i][j]);
            i--; j++;
        }
    }
    return 0;
}
