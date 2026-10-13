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
        firstDigit = temp;
        temp /= 10;
        numDigits++;
    }
    
   
    if (numDigits > 1) 

        n = n - firstDigit * pow(10, numDigits - 1) + lastDigit * pow(10, numDigits - 1);
        n = n - lastDigit + firstDigit;
    }
    
    printf("Number after swapping first and last digit = %d", n);
    return 0;
}
   


}