#include <stdio.h>
int main () {
    int i,j,x,sum=0,count=0;
    scanf("%d",&x);
    for(i=1; i<=x*2; i=i+2) {
            printf("%d\n",i);
            sum = sum + i;


    }

    printf("the sum of these %d\n",sum);



return 0;
}
