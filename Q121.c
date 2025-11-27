#include <stdio.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    char ch;
    if(!f) return 0;
    while((ch = fgetc(f)) != EOF) printf("%c", ch);
    fclose(f);
    return 0;
}
