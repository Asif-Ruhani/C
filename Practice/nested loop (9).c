#include <stdio.h>
int main ()
{
    int n,row, col;
    scanf("%d",&n);

    for(row=1; row<=n; row=row+1)
    {



        for(col=1; col<=row; col=col+1)
        {
            printf(" %d",col);



        }
        printf("\n");

    }  // new from here

    for(row=(n-1); row>=1; row=row-1)
    {



        for(col=1; col<=row; col=col+1)
        {
            printf(" %d",col);



        }
        printf("\n");
    }


    return 0;
}

