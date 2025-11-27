#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    long long prod=1;
    for(int i=0;i<n;i++){ scanf("%d",&a[i]); prod*=a[i]; }
    for(int i=0;i<n;i++){
        long long ans=1;
        for(int j=0;j<n;j++) if(i!=j) ans*=a[j];
        if(i) printf(" ");
        printf("%lld",ans);
    }
    printf("\n");
    return 0;
}
