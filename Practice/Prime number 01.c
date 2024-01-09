#include<stdio.h>

int main ()
{
    int x,count=0;
    printf("Enter a number :");
    scanf("%d",&x);

    for(int i=2; i<x ; ++i)
    {
        if(x%i==0)
        {
            count++;
            break;
        }


    }
    if(count==0)
    {
        printf("The number is a prime number ");
    }
    else
    {
        printf("The number is not a prime number ");
    }


    return 0;
}
