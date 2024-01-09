#include <stdio.h>
int main()
{
    int a,b,c,d;

    printf("You can do here the summation of four numbers & their average also");

    printf("\n Enter the first number : ");
    scanf("%d",&a);

    printf("\n Enter the second number : ");
    scanf("%d",&b);

    printf("\n Enter the third number : ");
    scanf("%d",&c);

    printf("\n Enter the fourth number : ");
    scanf("%d",&d);



    int sum;
    sum = a+b+c+d;
    printf("\n The summation is = %d\n",sum);

    int Avg;
    Avg = sum/4;
    printf("\n The Average of these numbers is = %d\n",Avg);

    if(Avg<3)
    {
        printf("\n You will die");

    }
    else if(Avg>5)
    {
        printf("\n You will succeed in life");
    }
    else
    {
        printf("\n You can nothing\n");
    }

    return 0;
}
