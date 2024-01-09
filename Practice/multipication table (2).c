#include <stdio.h>

int main () {
    int a,i,mul;
    printf("Enter the digit");
    scanf("%d",&a);
    for(i=1; i<=10; ++i) {
        mul = a*i;
        printf(" %d x %d = %d\n",a,i,mul);
    }


return 0;
}
