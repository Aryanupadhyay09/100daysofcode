#include <stdio.h>

int main() {
    FILE *f = fopen("input.txt", "a");
    char s[200];
    fgets(s, 200, stdin);
    fputs(s, f);
    fclose(f);
    return 0;
}
