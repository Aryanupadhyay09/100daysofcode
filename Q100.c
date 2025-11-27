#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    scanf("%[^\n]",s);
    int n=strlen(s);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++) putchar(s[k]);
            putchar('\n');
        }
    }
    return 0;
}
