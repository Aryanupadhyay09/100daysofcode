#include <stdio.h>
int main(){
    char s[1000];
    scanf("%[^\n]",s);
    for(int i=0;s[i];i++) if(s[i]==' ') s[i]='-';
    printf("%s\n",s);
    return 0;
}
