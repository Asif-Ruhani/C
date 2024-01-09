#include <stdio.h>

int main ()
{   int i,sum=0,avg,marks[6];
    printf("Enter the numbers :");

    for(i=0; i<6; ++i)
    {
        scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }
    //avg = sum/6;
    printf("The summation is %d\n",sum);
    printf("The avg is %d\n",(float)sum/6);

return 0;
}
