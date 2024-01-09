#include <stdio.h>

int main () {
    int i,x,y,mul=1;
    scanf("%d%d",&x,&y);
    for(i=1; i<=y; ++i) {
        mul = mul*x;
    }
    printf("the ans is %d\n",mul);

return 0;
}
