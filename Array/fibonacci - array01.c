#include<stdio.h>

int main ()
{   int i,n,fib;
    printf("Enter your array size");
    scanf("%d",&n);

    int arr[n];
    arr[0]=0;
    arr[1]=1;

    for(i=2; i<n; ++i)
    {
       arr[i]=arr[i-1] + arr[i-2];

    }

    printf("\n");

    for(i=0; i<n; ++i)
    {
        printf(" %d",arr[i]);
    }


return 0;
}

