#include <stdio.h>

int main ()
{   int i,sum=0,avg,n;
    printf("How many numbers do you use ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the numbers :");

    for(i=0; i<n; ++i)
    {
        scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }
    avg = sum/n;
    printf("The summation is %d\n",sum);
    printf("The avg is %d\n",avg);

return 0;
}

