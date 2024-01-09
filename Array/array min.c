#include <stdio.h>

int main ()
{   int x,i;
    scanf("%d",&x);
    int num[x];
    for(i=0; i<x; ++i)
    {
        scanf("%d",&num[i]);
    }
    int min=num[0];
    for(i=1; i<x; ++i)
    {
    if(min>num[i])
        min=num[i];
    }
    printf("The minimum value is %d\n",min);

return 0;
}


