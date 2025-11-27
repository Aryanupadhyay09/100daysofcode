#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    int c, prev = ' ', count = 0;
    if(!f) return 0;
    while((c = fgetc(f)) != EOF) {
        if(!isspace(c) && isspace(prev)) count++;
        prev = c;
    }
    printf("%d", count);
    fclose(f);
    return 0;
}
