#include <stdio.h>

int main() {


    int i, b;
    int sum=0;

    printf("\n How many player in the team  :");
    scanf("%d",&b);

    if (b<=11) {

            printf("\n Enter players' score one by one :");
            scanf("%d",&b);


        for(i=1;i<=b;i=i+1){





        sum=sum+i;

        }
        printf("\n Total score of the team :%d\n",sum);



    }

    else {
        printf("\n You have entered a wrong number\n");
    }












return 0;
}
