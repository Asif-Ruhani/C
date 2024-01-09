#include <stdio.h>

int main ()

{
    int i,j,No_row,No_col;

    printf("Enter the row & col size of A matrix :");
    scanf("%d%d",&No_row,&No_col);

    int A[No_row][No_col];

    for(i=0; i<No_row; ++i)
    {
        for(j=0; j<No_col; ++j)
        {
           printf("A[%d][%d]",i,j);
           scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


      printf("Enter the row & col size of B matrix :");
    scanf("%d%d",&No_row,&No_col);

    int B[No_row][No_col];

    for(i=0; i<No_row; ++i)
    {
        for(j=0; j<No_col; ++j)
        {
           printf("B[%d][%d]",i,j);
           scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


        printf("A = ");
    for(i=0; i<No_row; ++i)
    {
        printf("\t");
        for(j=0; j<No_col; ++j)
        {
           printf(" %d",A[i][j]);
        }
        printf("\n");

    }





        printf("\nB = ");
    for(i=0; i<No_row; ++i)
    {
        printf("\t");
        for(j=0; j<No_col; ++j)
        {
           printf(" %d",B[i][j]);
        }
        printf("\n");

    }

     int C[No_row][No_col];
     printf("\nThe summation of two matrix is\n\n c =");

     for(i=0; i<No_row; ++i)
    {

        printf("\t");
        for(j=0; j<No_col; ++j)
        {
          C[i][j] = A[i][j] + B[i][j];
          printf(" %d",C[i][j]);
        }
        printf("\n");

    }




    getch();
}


