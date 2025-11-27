#include <stdio.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    char ch;
    int lines = 0;
    if(!f) return 0;
    while((ch = fgetc(f)) != EOF) if(ch == '\n') lines++;
    printf("%d", lines + 1);
    fclose(f);
    return 0;
}
