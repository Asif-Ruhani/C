#include <stdio.h>
int main () {
    int n,i,fact=1;
    printf("Enter the factorial number : ");
    scanf("%d",&n);

    for(i=n; i>=1; --i) {
        fact = fact*i;
    }
    printf("The ans is %d\n",fact);
        // second type
    /*int n,i,fact=1;
    printf("Enter the factorial number : ");
    scanf("%d",&n);

    for(i=1; i<=n; ++i) {
        fact = fact*i;
    }
    printf("The ans is %d\n",fact);*/


return 0;
}

