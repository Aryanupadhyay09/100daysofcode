#include <stdio.h>
int main(){
    char s[1000];
    scanf("%[^\n]",s);
    int v=0,c=0;
    for(int i=0;s[i];i++){
        char ch=s[i];
        if((ch>='A' && ch<='Z')||(ch>='a'&&ch<='z')){
            char low=(ch>='A'&&ch<='Z')?ch+32:ch;
            if(low=='a'||low=='e'||low=='i'||low=='o'||low=='u') v++; else c++;
        }
    }
    printf("%d %d\n",v,c);
    return 0;
}
