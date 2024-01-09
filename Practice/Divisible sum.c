#include <stdio.h>

int main () {
    int n,m,q,sum=0;
    scanf("%d%d%d",&n,&m,&q);
    for(n; n<=m; n=n+1){
        if(n%q==0) {
            sum=sum+n;
        }
    }
    printf("The sum is %d\n",sum);

return 0;
}
