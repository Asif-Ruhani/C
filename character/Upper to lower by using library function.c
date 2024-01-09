#include<stdio.h>

int main ()
{   char upper,lower;
    printf("Enter any capital letter :");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("The small letter is %c\n",lower);

getch();
}




