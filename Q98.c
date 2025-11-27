#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    scanf("%[^\n]",s);
    int i=0,first=1;
    while(s[i]==' ') i++;
    while(s[i]&&s[i]!=' ') i++;
    while(s[i]==' ') i++;
    while(s[i]){
        putchar(s[i]);
        i++;
    }
    putchar('\n');
    return 0;
}
