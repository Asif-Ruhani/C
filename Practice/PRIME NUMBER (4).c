#include <stdio.h>
int main () {
    int i,n,count=0;
    scanf("%d",&n);
    for(i=2; i<n; ++i) {
        if(n%i==0)
        count = count +1;
        break;




    }
    if(count==0)
        printf("this is a prime number\n");
        else {
            printf("This is not a prime number\n");
        }

return 0;
}
