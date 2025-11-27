#include <stdio.h>

int main() {
    FILE *a = fopen("a.txt", "r");
    FILE *b = fopen("b.txt", "r");
    FILE *c = fopen("c.txt", "w");
    char ch;
    if(!a || !b || !c) return 0;
    while((ch = fgetc(a)) != EOF) fputc(ch, c);
    while((ch = fgetc(b)) != EOF) fputc(ch, c);
    fclose(a); fclose(b); fclose(c);
    return 0;
}
