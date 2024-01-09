#include <stdio.h>
int main () {
    int i,n,m,j,cont=0;
    scanf("%d%d",&n,&m);


    for(i=n+1; i<m; ++i) {

       for(j=2; j<i; ++j)
         if(i%j==0)

                break;

             if(j==i)
                cont ++;

               // printf(" %d\n",i);




    }
    printf("total prime number is %d",cont);


return 0;
}
