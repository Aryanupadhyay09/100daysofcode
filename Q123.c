#include <stdio.h>

int main() {
    FILE *a = fopen("a.txt", "r");
    FILE *b = fopen("b.txt", "w");
    char ch;
    if(!a || !b) return 0;
    while((ch = fgetc(a)) != EOF) fputc(ch, b);
    fclose(a);
    fclose(b);
    return 0;
}
