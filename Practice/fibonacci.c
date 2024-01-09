#include <stdio.h>

int main () {
    int first=0, second=1, count=0, n, fibo;

    printf("Enter the range ");
    scanf("%d",&n);

   for(int i=0; i<=n; i=i+1) {
    if(count<=1) {
        fibo = count;
    }
    else {
        fibo = first + second;
        first = second;
        second = fibo;
    }
    printf("%d ",fibo);
    count = count + 1;
    }

return 0;
}
