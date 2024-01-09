#include <stdio.h>

int main () {
    int x=12;
    x=++x * 2;

    if(x>=24 && x<26) {
        printf("Condition 1 is true\n");
        x+=1;
    }
     if(x>24 && x<=26) {
        printf("Condition 2 is true\n");
        x-=1;
    }
    x= x/2;
    if(x==12) {
        printf("Condition 3 is true\n");
    }
    if(x>100 || x<100) {
        printf("Condition 4 is true\n");
    }
    printf("The final value of x is %d\n",x);

return 0;
}
