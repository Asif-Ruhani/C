#include <stdio.h>

int main ()
{
    int array1[10],array2[10],i;
    printf("Enter the value of array1 :");

    for(i=0; i<4; ++i)
    {
        scanf("%d",&array1[i]);
    }
    array2[3]=array1[0];
    array2[0]=array1[3];
    printf("%d%d",array2[3],array2[0]);









getch();
}
