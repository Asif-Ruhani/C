#include <stdio.h>

int main ()

{
    int i,j,No_row,No_col;

    printf("Enter the row & col size :");
    scanf("%d%d",&No_row,&No_col);

    int A[No_row][No_col];

    for(i=0; i<No_row; ++i)
    {
        for(j=0; j<No_col; ++j)
        {
           scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<No_row; ++i)
    {
        for(j=0; j<No_col; ++j)
        {
           printf(" %d",A[i][j]);
        }
        printf("\n");
    }


    getch();
}
