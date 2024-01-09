#include <stdio.h>
int main () {
    int i, count=0,couunt=0,x;
    for(i=0; i<10; i++) {
            scanf("%d",&x);
        if(x%2==0)
        {
            count = count + 1;
        }
        else
        {
            couunt = couunt + 1;
        }
    }
    printf("you have inputted %d even numbers and %d odd numbers\n",count,couunt);



return 0;
}
