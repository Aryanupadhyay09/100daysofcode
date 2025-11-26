#include <stdio.h>
int main() {
    int n, distinct = 1;
    scanf("%d", &n);
    int a[n][n], diag[100] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) {
        int val = a[i][i];
        if (diag[val]) { distinct = 0; break; }
        diag[val] = 1;
    }
    printf(distinct ? "Distinct" : "Not Distinct");
    return 0;
}
