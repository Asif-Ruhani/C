#include <stdio.h>

int main ()
{
    int i,marks[5];

    for(i=0; i<5; ++i)
    {
        scanf("%d",&marks[i]);
    }

    printf("\n\n");

    for(i=0; i<7; ++i)
    {
        printf("%d\n",marks[i]);
    }



    return 0;
}
