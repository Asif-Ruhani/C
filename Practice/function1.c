#include <stdio.h>
int f(int x,int y) {
    int mul;
scanf("%d%d",&x,&y);
mul = x*y;
//printf("%d\n",mul);
return mul;
}

int g(int a) {
    int sum;
//scanf("%d",&a);
sum = a+a;
printf("%d\n",sum);
return sum;
}

int main () {

    int z = f(4,3);
    int c = g(z);



return 0;
}
