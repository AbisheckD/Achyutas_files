#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter the array size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++);
    printf("Reversed array elements are:\n");
    for(i=i-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
