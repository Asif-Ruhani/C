#include <stdio.h>

int main () {
     int n,row, col;
    scanf("%d",&n);

    for(row=1; row<n; row++) {



        for(col=1; col<=n-row;col++) {  //printing space
                printf(" ");
             }
             for(col=1; col<=row;col++) {  //printing number
                printf(" %d",col);
             }

        printf("\n");
    }


return 0;
}

