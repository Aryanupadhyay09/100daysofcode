#include <stdio.h>
#include <string.h>
int main(){
    char s[2000];
    scanf("%[^\n]",s);
    int n=strlen(s),max=0;
    for(int i=0;i<n;i++){
        int seen[256]={0},len=0;
        for(int j=i;j<n;j++){
            if(seen[(unsigned char)s[j]]) break;
            seen[(unsigned char)s[j]]=1; len++;
        }
        if(len>max) max=len;
    }
    printf("%d\n",max);
    return 0;
}
