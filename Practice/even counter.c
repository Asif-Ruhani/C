#include <stdio.h>
int main () {
    int i,n,x,counter1=0,counter2=0;
    printf("How many number do you check : ");
    scanf("%d",&n);
    printf("Input your numbers one by one \n");
    for(i=0;i<n;++i) {

        scanf("%d",&x);
        if(x%2==0) {
            counter1 = counter1 + 1;
        }
        else {
            counter2 = counter2 + 1;
        }
    }
    printf("Here the number of even is %d\n",counter1);
    printf("Here the number of odd is %d\n",counter2);


return 0;
}
