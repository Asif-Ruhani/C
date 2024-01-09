#include <stdio.h>

int main () {
    int i,a,b,sum=0,count=0;
    printf("Enter your range ");
    scanf("%d%d",&a,&b);
    for(i=a+1; i<b; ++i) {
        if (i%2==0)
                break;
        if(i%2!=0)
            count = count+1;
            printf("%d\n",i);
            sum = sum+i;





    }
    printf("total odd number is %d\n",count);
    printf("sum of these number is %d\n",sum);



return 0;
}
