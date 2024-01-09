#include<stdio.h>

int main()
{   int base,exp,ans;
    printf("Enter the base :");
    scanf("%d",&base);
    printf("Enter the exp :");
    scanf("%d",&exp);

    ans = pow(base,exp);
    printf("the ans is %d\n",ans);

return 0;
}
