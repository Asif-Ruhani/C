#include <stdio.h>
int main () {
    int n,a,i;
    printf("How many number do you check : ");
    scanf("%d",&n);
    printf("Input your numbers one by one \n");
    for(i=0;i<n;++i) {
        scanf("%d",&a);
        if(a%2==0) {
        printf("you have inputted %d and %d is an even number \n",a,a);
    }
    else {
       printf("you have inputted %d and %d is an odd number \n",a,a);
    }
    }




return 0;
}
