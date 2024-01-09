#include <stdio.h>
int main () {
    int i,j,B,S,x,y,sumBD=0,sumSL=0,count=0;
    printf("how many player do play in BD team :");
    scanf("%d",&B);
    printf("Input players runs one by one :\n");
    for(i=1; i<=B; ++i) {
        scanf("%d",&x);
        sumBD = sumBD + x;
        if(x>=50) {
            count = count + 1;
        }
    }
       printf("how many player do play in SL team :");
    scanf("%d",&S);
    printf("Input players runs one by one :\n");
    for(j=1; j<=S; ++j) {
        scanf("%d",&y);
        sumSL = sumSL + y;
        if(y>=50) {
            count = count + 1;
        }
    }
    if(sumBD>sumSL) {
        printf("BD won the match\n");
    }
    else {
        printf("SL won the match\n");
    }
    printf("Total half centuary %d\n",count);





return 0;
}
