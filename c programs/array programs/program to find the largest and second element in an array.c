#include<stdio.h>

void largest_number(int arr[], int size)
{
    int max = arr[0],i;
    for(i=0; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d is the largest element in the array\n",max);
}

void smallest_number(int arr[], int size)
{
    int min = arr[0],i;
    for(i=0; i<size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d is the smallest element in the element\n",min);
}
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
    largest_number(arr,size);
    smallest_number(arr,size);
    return 0;
}
