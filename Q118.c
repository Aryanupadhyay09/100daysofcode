#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n-1];
    for(int i=0;i<n-1;i++) scanf("%d",&a[i]);
    int xor=0;
    for(int i=0;i<n;i++) xor^=i;
    for(int i=0;i<n-1;i++) xor^=a[i];
    printf("%d\n",xor);
    return 0;
}
