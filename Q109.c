#include <stdio.h>
int main(){
    int n,k; if(scanf("%d %d",&n,&k)!=2) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long long max=0;
    for(int i=0;i<=n-k;i++){
        long long sum=0;
        for(int j=0;j<k;j++) sum+=a[i+j];
        if(i==0||sum>max) max=sum;
    }
    printf("%lld\n",max);
    return 0;
}
