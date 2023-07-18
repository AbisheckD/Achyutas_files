#include<stdio.h>
int main()
{
    int element,position,size,i;
    printf("Enter the size of element:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to be inserted:\n");
    scanf("%d",&position);
    printf("Enter the element to be inserted:\n");
    scanf("%d",&element);
    if((position<=0) || (position>size+1))
    {
        printf("Enter the proper position\n");
    }
    else
    {
        for(i=size-1; i>=position-1; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[position-1] = element;
        size++;
    }
    printf("After insertion:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
