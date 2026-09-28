#include <stdio.h>
int main()
{
    int a , b , remainder;
    printf("enter the 1st value");
    scanf("%d",&a);
    printf("enter the 2nd value");
    scanf("%d",&b);
    remainder = a % b;
    printf("%d\n", remainder);
    return 0;
}