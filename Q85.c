#include <stdio.h>
int main(){
    char s[1000];
    scanf("%[^\n]",s);
    for(int i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z') s[i]=s[i]-32;
    }
    printf("%s\n",s);
    return 0;
}
