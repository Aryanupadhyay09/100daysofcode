#include <stdio.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    int c, count = 0;
    if(!f) return 0;
    while((c = fgetc(f)) != EOF) count++;
    printf("%d", count);
    fclose(f);
    return 0;
}
