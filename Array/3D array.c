
#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the block , row & col :");
    scanf("%d %d %d",&x,&y,&z);
    int A[x][y][z];
    int block, row, col;
    printf("Enter values :");
    for(int i=0; i<x; ++i)
    {

        for(int j=0; j<y; ++j)
        {
            for(int k=0; k<z; ++k)
            {
                printf("A[%d][%d][%d] = ",i,j,k);
                scanf("%d",&A[i][j][k]);
            }
            printf("\n");
        }

    }
     printf(" A = ");
    for(int i=0; i<x; ++i)
    {


        for(int j=0; j<y; ++j)
        {
             printf("\t");
            for(int k=0; k<z; ++k)
            {

                printf(" %d",A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");

    }


getch();
    }
