#include <stdio.h>
int main(){
    char s[1000],ch;
    scanf("%[^\n]",s);
    scanf(" %c",&ch);
    int cnt=0;
    for(int i=0;s[i];i++) if(s[i]==ch) cnt++;
    printf("%d\n",cnt);
    return 0;
}
