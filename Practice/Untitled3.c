#include <stdio.h>

int main () {
    int i,j,a,b,count=0,count1=0,sum=0;
    scanf("%d%d",&a,&b);

    for(i=a+1; i<b; ++i) {

        for(j=2; j<i; ++j) {
            if(i%j==0) {
                //count = count+1;
                break;
            }
        }

        if(j==i) {
            printf("\n  %d\n\n",i);

            count1 = count1 +1;
            sum = sum + i;
        }
    }
    printf("\n\ntotal prime number is : %d\n\n",count1);
    printf("\n\nthe summation is : %d\n\n",sum);


return 0;
}

