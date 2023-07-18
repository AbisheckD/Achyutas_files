#include<stdio.h>
void sum_of_array(int*, int);
void square_of_array(int*, int);

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
    sum_of_array(arr, size);
    square_of_array(arr, size);
    return 0;
}

void sum_of_array(int arr[], int size)
{
    int i,sum=0;
    for(i=0; i<size; i++)
    {
        sum += arr[i];
    }
    printf("Sum of array elements are: %d\n",sum);
}

void square_of_array(int arr[], int size)
{
    int i,sum[size];
    for(i=0; i<size; i++)
    {
        sum[i] = arr[i] * arr[i];
    }
    printf("squared value of array are: \n");
    for(i=0; i<size; i++)
    {
        printf(" %d ",sum[i]);
    }
    printf("\n");
    sum_of_array(sum, size);
}
