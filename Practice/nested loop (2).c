#include <stdio.h>
int main () {
    int n,row, col;
    scanf("%d",&n);

    for(row=0; row<n; row++) {
            //printf("%d",row);


        for(col=0; col<=row;col++) {
                printf(" %d",col);



        }
        printf("\n");
    }


return 0;
}
