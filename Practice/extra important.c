#include <stdio.h>
int main ()
{
    int i,j,x,y;
    scanf("%d",&x);
    for(i=x;i<=x; ++i)
    {
        for(j=1;j<=100; j=j+1)
        {
            if(j%x==0)
            {
                printf("%d\n",j);
            }
        }
    }
    return 0;

}
