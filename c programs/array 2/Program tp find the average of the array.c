#include<stdio.h>

void average_of_array(int arr[], int size)
{
    int i,sum=0;
    double average;
    for(i=0; i<size; i++)
    {
        sum += arr[i];
    }
    average = sum/size;
    printf("The average sum of array is %lf\n",average);
}

void occurance_of_array(int arr[], int size)
{
    int i,element,count=0;
    printf("Enter the element to check the no of occurance:\n");
    scanf("%d",&element);
    for(i=0; i<size; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }
    printf("The element %d is present %d times\n",element,count);
}
int main()
{
    int size,i;
    printf("Enter the array size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    average_of_array(arr, size);
    occurance_of_array(arr, size);
    return 0;
}
