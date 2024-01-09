#include <stdio.h>
int main () {
    int i,x,fact=1;
    scanf("%d",&x);
    for(i=x; i>=1; --i) {
        fact = fact *i;
    }
    printf("%d\n",fact);



return 0;
}
