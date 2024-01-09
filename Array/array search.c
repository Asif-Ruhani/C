#include<stdio.h>

int main ()
{   int i,position,n,x;

    int arr[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,25,35,16,39,14,226,224,156,123,254,2365,3652,258,255,22,245,251,256};

   printf("Enter the value which you want to check ");
   scanf("%d",&n);
    position = -1;

    for(i=0; i<n; ++i)
    {
        if(n==arr[i])
        {
           position=i+1;
            break;
        }

    }
    if(position==-1)
        {
             printf(" \n the value is not here");
        }
        else
        {
            printf("The value is founded and its position is %d",position);
        }



return 0;
}
