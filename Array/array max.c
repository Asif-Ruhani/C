#include <stdio.h>

int main ()
{   int x,i;
    scanf("%d",&x);
    int num[x];
    for(i=0; i<x; ++i)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(i=1; i<x; ++i)
    {
    if(max<num[i])
        max=num[i];
    }
    printf("The maximum value is %d\n",max);

return 0;
}

