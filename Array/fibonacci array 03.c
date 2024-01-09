#include<stdio.h>

int main ()
{   int i,n,fib;
    printf("Enter your array size ");
    scanf("%d",&n);

    int arr[n];
     arr[0]=0;
     arr[1]=1;

       for(i=0; i<n; ++i)
      {
      if(i<=1)
      {
          printf(" %d",i);
      }
      else
      {

       arr[i]=arr[i-1] + arr[i-2];
       printf(" %d",arr[i]);
      }

    }






return 0;
}


