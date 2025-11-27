#include <stdio.h>
#include <string.h>
int main(){
    char s[2000];
    scanf("%[^\n]",s);
    int i=0;
    while(s[i]){
        int j=i;
        while(s[j]&&s[j]!=' ') j++;
        for(int k=j-1;k>=i;k--) putchar(s[k]);
        if(s[j]) putchar(' ');
        i=j+ (s[i]==' ' ? 1:0);
        if(s[j]==0) break;
        i=j+1;
    }
    putchar('\n');
    return 0;
}
