#include <stdio.h>

int main ()
{
    int n,row, col;
    scanf("%d",&n);

    for(row=1; row<=n; row=row+1)
    {

        for(col=1; col<=row; col=col+1)
        { printf("%d",col%2);

            /*if(col%2==0)
            {
                printf("0");

            }
            else
            {
                printf("1");
            }*/
        }
        printf("\n");
    }


    return 0;
}
