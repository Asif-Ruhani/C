#include <stdio.h>
int main () {
    int i,n,counter1=0,counter2=0;
    scanf("%d",&n);

    for(i=2; i<n; ++i) {


        if(n%i==0) {
        counter1 = counter1 +1;
        break;


        }
        if(counter1==0) {
                counter2 = counter2 +1;

        }
    }
    /*if(counter==0) {
        printf("This is a prime number\n");
    }
    else {
            counter2 = counter2 +1;
        printf("This is not a prime number\n");
    }*/

   printf("%d",counter2);


return 0;
}

