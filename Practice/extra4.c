#include <stdio.h>


int f(int y) {
printf("value of y ");
scanf("%d",&y);
printf("%d\n\n",y);
return y;
      }
int main () {

int x,y;
printf("value of x ");
scanf("%d",&x);
printf("%d\n\n",x);

int a = f(y);


return 0;
}
