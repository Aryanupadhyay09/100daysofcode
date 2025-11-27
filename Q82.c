#include <stdio.h>
int main(){
    char s[1000];
    scanf("%[^\n]",s);
    int c=0;
    while(s[c]) c++;
    printf("%d\n",c);
    return 0;
}
