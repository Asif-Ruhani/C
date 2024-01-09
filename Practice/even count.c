#include <stdio.h>

int main () {
    int a,i,n,counter=0;

    printf("How many digit do you input :");
    scanf("%d",& n);
    printf("Enter the numbers : \n");

    for(i=1; i<=n;++i) {

            scanf("%d",&a);

        if(a%2==0) {
            counter = counter +1;
        }
    }
    printf("%d",counter);


return 0;
}
