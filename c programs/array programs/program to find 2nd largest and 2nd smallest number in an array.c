#include<stdio.h>

void second_largest_number(int arr[], int size)
{
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%d is the second largest element in the array\n",arr[1]);
}

void second_smallest_number(int arr[], int size)
{
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%d is the second smallest number in the array\n",arr[1]);
}

int main()
{
    int size,i;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array element:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    second_largest_number(arr,size);
    second_smallest_number(arr,size);
    return 0;
}
