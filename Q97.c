#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    scanf("%[^\n]",s);
    int i=0;
    while(s[i]){
        while(s[i]==' ') i++;
        if(!s[i]) break;
        putchar(s[i]);
        while(s[i]&&s[i]!=' ') i++;
        if(s[i]==0) break;
        i++;
    }
    putchar('\n');
    return 0;
}
