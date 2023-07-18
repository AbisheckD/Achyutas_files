#include<stdio.h>

void print_index(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(i%2)
        {
            printf("%d is odd index\n",i);
        }
        else
        {
            printf("%d is even index\n",i);
        }
    }
}

void print_odd_even_value(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(i%2)
        {
            printf("%d is odd index value in index %d\n",arr[i],i);
        }
        else
        {
            printf("%d is even index value in index %d\n",arr[i],i);
        }
    }
}

void print_index_value(int arr[], int size)
{
    int i,element;
    printf("Enter the index number:\n");
    scanf("%d",&element);
    for(i=0; i<size; i++)
    {
        if(i == element)
        {
            printf("%d is index value in index present in %d\n",arr[i],i);
        }
    }
        if(size <= element)
        {
            printf("Invalid index\n");
        }
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
    print_index(arr, size);
    print_odd_even_value(arr, size);
    print_index_value(arr, size);
    return 0;
}
