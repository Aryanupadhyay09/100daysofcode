#include <stdio.h>
int main() {
    int n, symmetric = 1;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != a[j][i]) symmetric = 0;
    printf(symmetric ? "Symmetric" : "Not Symmetric");
    return 0;
}
