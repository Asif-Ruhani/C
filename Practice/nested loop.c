#include <stdio.h>

int main ()
{
    int n,row,col;

    scanf("%d",&n);

    for(row=1; row<=n; row=row+2) {

        for(col=1; col<=row; col=col+3) {
            printf(" %d",col);
        }
        printf("\n");
    }

    return 0;
}

