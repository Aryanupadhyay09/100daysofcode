#include <stdio.h>
int main(){
    char s[1000];
    scanf("%[^\n]",s);
    for(int i=0;s[i];i++) printf("%c\n",s[i]);
    return 0;
}
