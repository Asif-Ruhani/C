#include <stdio.h>
int main () {
    int i,a,b,count=0,count1=0;
    scanf("%d%d",&a,&b);
    for(i=a+1; i<b; ++i) {
        if(i%400==0) {
        count = count+1;
        printf ("\n\n%d\n",i);

    }
    else if(i%4==0 && i%100!=0) {
        count = count+1;
        printf ("%d\n",i);
    }

    else { count1 = count1+1;

    }

    }
    printf("there are %d leap year in these years \n",count);
    printf("there are %d not leap year in these years \n",count1);



return 0;
}

