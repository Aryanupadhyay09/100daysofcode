#include <stdio.h>

int main() {
    FILE *f = fopen("output.txt", "w");
    char str[200];
    fgets(str, 200, stdin);
    fputs(str, f);
    fclose(f);
    return 0;
}
