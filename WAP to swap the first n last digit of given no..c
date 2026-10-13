#include <stdio.h>
int main()
{
    int firstdigit , lastdigit , numdigit =0 , temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp = n;
    lastdigit = temp % 10;
    while (temp!=0)
    {
        firstdigit = temp;
    temp / = 10;
    }
   


}