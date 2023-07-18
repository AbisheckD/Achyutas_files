#include<stdio.h>
int main()
{
    int size,i,element,k;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be deleted:\n");
    scanf("%d",&element);
    for(i=0; i<size; i++)
    {
        if(arr[i] == element)
        {
            for(k=i; k<size; k++)
            {
                arr[k] = arr[k+1];
            }
            size--;
            i--;
        }
    }
    printf("After removing duplicate element:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
