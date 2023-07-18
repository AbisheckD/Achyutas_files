#include<stdio.h>
void duplicate_element(int arr[], int size)
{
    int i,j,k;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k<size; k++)
                {
                    arr[k] = arr[k+1];
                }
                j--;
                size--;
            }
        }
    }
    printf("After removing duplicate elements are:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int size,i;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    duplicate_element(arr,size);
    return 0;
}
