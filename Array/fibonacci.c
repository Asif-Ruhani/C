#include<stdio.h>

int main ()
{
    int num1,num2,fib,n,i,x=0;
    num1=0;
    num2=1;
    scanf("%d",&n);

    for(i=0; i<n; ++i)
    {
         if(i<=1)
        {
            fib=i;
        }

        else
        {
        fib=num1+num2;
        num1=num2;
        num2=fib;
        }

        printf(" %d",fib);

    }
}

