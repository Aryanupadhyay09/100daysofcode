#include <stdio.h>

int main() {
    FILE *f = fopen("file.txt", "r");
    if(f) { printf("Exists"); fclose(f); }
    else printf("Not exists");
    return 0;
}
