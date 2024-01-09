#include<stdio.h>

int main()
{   int base,exp,ans=1;
    printf("Enter the base :");
    scanf("%d",&base);
    printf("Enter the exponent :");
    scanf("%d",&exp);

    for(int i=1; i<=exp; ++i)
    {
        ans = ans*base;
    }
    printf("the ans is %d\n",ans);



return 0;
}

