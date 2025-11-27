#include <stdio.h>
#include <string.h>
int main(){
    char s[2000];
    scanf("%[^\n]",s);
    int i=0,maxl=0,start=0;
    while(1){
        while(s[i]==' ') i++;
        if(!s[i]) break;
        int j=i;
        while(s[j]&&s[j]!=' ') j++;
        int len=j-i;
        if(len>maxl){ maxl=len; start=i; }
        i=j;
    }
    char out[1000];
    int k=0;
    for(int t=0;t<maxl;t++) out[k++]=s[start+t];
    out[k]=0;
    printf("%s\n",out);
    return 0;
}
