#include<stdio.h>

int main ()
{
   int n,count=0,cont1=0;
   printf("How many numbers do you want to check :");
   scanf("%d",&n);
    int x[n],y[1000];
   printf("Now enter the numbers for checking prime numbers :");

   for(int i=0; i<n; ++i)
   {
       scanf("%d",&x[i]);
   }

   for(int i=0; i<x[i]; ++i)
   {
       for(int j=2; j<x[i]; ++j)
       {
           if(x[i]%j==0)
           {
               count++;
               break;
           }
           else
           {
               y[i]=x[i];
               cont1++;
               break;
           }

        }
   }
   printf("There are %d prime numbers ",cont1);

   printf("And the prime numbers are ");
   for(int i=0; i<cont1; ++i)
   {
       printf("  %d",y[i]);
   }



    return 0;
}
