#include <stdio.h>
#include <string.h>
int main(){
    char a[1000],b[1000];
    scanf("%[^\n]",a);
    getchar();
    scanf("%[^\n]",b);
    int fa[256]={0},fb[256]={0};
    for(int i=0;a[i];i++) fa[(unsigned char)a[i]]++;
    for(int i=0;b[i];i++) fb[(unsigned char)b[i]]++;
    int an=1;
    for(int i=0;i<256;i++) if(fa[i]!=fb[i]) an=0;
    printf(an?"Anagram\n":"Not Anagram\n");
    return 0;
}

