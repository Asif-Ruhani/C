#include <stdio.h>
int main () {
    int i,a,count=0;
    scanf("%d",&a);
    for(i=2; i<a; ++i) {
        if(a%i==0)
            count = count+1;
           //break;
    }

    if(count==0) {
         printf("this is the prime number\n");
    }

    else {
        printf("this is not the prime number\n");

    }

return 0;
}
