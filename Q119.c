#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int x=0;
    for(int i=0;i<n;i++) x^=a[i];
    int setbit=x&-x;
    int res=0;
    for(int i=0;i<n;i++) if(a[i]&setbit) res^=a[i];
    printf("%d\n",res);
    return 0;
}
