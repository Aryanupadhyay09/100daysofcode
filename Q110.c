#include <stdio.h>
int main(){
    int n,k; if(scanf("%d %d",&n,&k)!=2) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<=n-k;i++){
        int m=a[i];
        for(int j=1;j<k;j++) if(a[i+j]>m) m=a[i+j];
        if(i) printf(" ");
        printf("%d",m);
    }
    printf("\n");
    return 0;
}
