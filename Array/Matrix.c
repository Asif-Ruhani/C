#include <stdio.h>

int main ()

 {  int i,j,No_row,No_col;
    int A[4][5]={ {1,2,3,4,5}, {6,7,8,9,1}, {1,2,3,4,5}, {6,7,8,9,2} };

    for(i=0; i<4; ++i)
    {
        for(j=0; j<5; ++j)
        {
            printf(" %d",A[i][j]);
        }
        printf("\n");
    }


 getch();
 }

