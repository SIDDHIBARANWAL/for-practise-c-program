#include<stdio.h>
int main()
{
    int i,n,newElement;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the new element to be inserted:");
    scanf("%d",&newElement);
    printf("Enter the position where the new element is to be inserted:");
    scanf("%d",&i);
    for(i=1;i<n;i++)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=newElement;
    printf("Array after insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}