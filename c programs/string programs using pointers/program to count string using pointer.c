#include<stdio.h>
int main()
{
    int size,i,c=0;
    printf("Enter the size string:\n");
    scanf("%d",&size);
    char str[size], *p;
    printf("Enter the string:\n");
    scanf("%s",str);
    p=str;
    for(i=0; *p; i++)
    {
        c++;
        p++;
    }
    printf("%d is the count of the string\n",c);
    return 0;
}
