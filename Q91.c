#include <stdio.h>
int main(){
    char s[1000];
    scanf("%[^\n]",s);
    for(int i=0;s[i];i++){
        char ch=s[i];
        if(ch>='A'&&ch<='Z') ch=ch+32;
        if(ch>='a'&&ch<='z'){
            if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')) putchar(s[i]);
        } else putchar(s[i]);
    }
    putchar('\n');
    return 0;
}
