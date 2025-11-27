#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    long long s=(long long)n*(n+1)/2;
    for(int x=1;x<=n;x++){
        long long left=(long long)x*(x+1)/2;
        long long right=s-((long long)(x-1)*x/2);
        if(left==right){ printf("%d\n",x); return 0; }
    }
    printf("-1\n");
    return 0;
}
