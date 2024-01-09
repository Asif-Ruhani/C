#include <stdio.h>
int main () {
    int n,m,i,q,sum=0,sum1=0;
    scanf("%d%d%d",&n,&m,&q);
    for(i=n; i<m; ++i) {
        if(i%q==0) {
            sum = sum +1;
        sum1 = sum1 + i;



        }
    }
     printf(" the divisible number is %d\n",sum);
     printf(" the summation of divisible numbers is %d\n",sum1);



return 0;
}
