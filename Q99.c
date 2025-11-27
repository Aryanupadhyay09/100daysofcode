#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int d,m,y;
    sscanf(s,"%d/%d/%d",&d,&m,&y);
    const char* mon[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%02d-%s-%04d\n",d,mon[m-1],y);
    return 0;
}
