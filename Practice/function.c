#include <stdio.h>

int f(int x) {

return (x*x);
}
int g(int y) {

return f(y+y);
}


int main () {


    int c = g(3);

    printf("\n %d \n",c);



return 0;
}
