#include <stdio.h>
#include <string.h>
int main(){
    char s[1000],t[1000];
    scanf("%[^\n]",s);
    getchar();
    scanf("%[^\n]",t);
    int fs[26]={0},ft[26]={0};
    for(int i=0;s[i];i++) if(s[i]>='a'&&s[i]<='z') fs[s[i]-'a']++;
    for(int i=0;t[i];i++) if(t[i]>='a'&&t[i]<='z') ft[t[i]-'a']++;
    int ok=1;
    for(int i=0;i<26;i++) if(fs[i]!=ft[i]) ok=0;
    printf(ok?"Anagram\n":"Not Anagram\n");
    return 0;
}
