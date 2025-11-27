#include <stdio.h>
#include <string.h>
int main(){
    char a[1000],b[1000];
    scanf("%[^\n]",a);
    getchar();
    scanf("%[^\n]",b);
    int la=strlen(a),lb=strlen(b);
    if(la!=lb){ printf("Not Rotation\n"); return 0;}
    char c[2000];
    strcpy(c,a); strcat(c,a);
    if(strstr(c,b)) printf("Rotation\n"); else printf("Not Rotation\n");
    return 0;
}
