#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[1000];
    fgets(s,1000,stdin);
    if(s[strlen(s)-1]=='\n') s[strlen(s)-1]=0;
    int i=0;
    while(s[i]&&s[i]==' ') i++;
    if(s[i]) s[i]=toupper(s[i]);
    for(i=i+1;s[i];i++) s[i]=tolower(s[i]);
    printf("%s\n",s);
    return 0;
}
