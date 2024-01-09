#include <stdio.h>
int main () {
    int x;
    printf("Enter any integer value :");
    scanf("%d",&x);
    printf("\n\n");
    if(x%2==0) {
        if(x%3==0) {
            printf("The number  is even & divisible by 3\n\n");
        }
        else {
            printf("The number  is even but not divisible by 3\n\n");
        }

    }
    else {
        if(x%3==0) {
            printf("The number  is odd & divisible by 3\n\n");
        }
        else {
            printf("The number  is odd and not divisible by 3\n\n");
        }
    }
return 0;
}
