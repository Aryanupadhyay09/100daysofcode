#include <stdio.h>
int main(){
    char s[1000];
    scanf("%[^\n]",s);
    int freq[26]={0};
    for(int i=0;s[i];i++) if(s[i]>='a'&&s[i]<='z'){
        freq[s[i]-'a']++;
        if(freq[s[i]-'a']==2){ printf("%c\n",s[i]); return 0; }
    }
    printf("-1\n");
    return 0;
}
