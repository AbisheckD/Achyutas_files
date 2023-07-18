#include<stdio.h>
void ascending_array(int*, int);
void decending_array(int*, int);

int main()
{
    int arr[10]={2,4,12,5,15,3,1,9,30,8},i,size;
    size=sizeof(arr)/sizeof(arr[0]);
    ascending_array(arr,size);
    decending_array(arr,size);
    return 0;
}

void ascending_array(int arr[], int size)
{
    int temp,i,j;
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
    printf("The ascending array elements are:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void decending_array(int arr[], int size)
{
    int temp,i,j;
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
    printf("The decending array elements are:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
