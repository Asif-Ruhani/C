#include <stdio.h>


int main ()
{
    int i,a,b,power=1;
    scanf("%d%d",&a,&b);
    for(i=0; i<b; i++) {

        power = power*a;
    }
    printf("%d\n",power);







    return 0;
}
