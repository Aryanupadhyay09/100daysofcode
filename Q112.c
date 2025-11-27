#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long long max=a[0],cur=0;
    for(int i=0;i<n;i++){
        if(cur+ a[i] < a[i]) cur=a[i]; else cur+=a[i];
        if(cur>max) max=cur;
    }
    printf("%lld\n",max);
    return 0;
}
