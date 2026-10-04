#include <stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=3;i++)
     {for(j=1;j<=3-i;j++)
     {
        printf("%d",j);
     }
     for(int k=1;k<=i;k++)
     {
        printf("%d",k);
    }
     printf("\n"); 
}
     return 0;

}