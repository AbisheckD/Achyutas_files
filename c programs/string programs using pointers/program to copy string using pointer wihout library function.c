#include<stdio.h>
int main()
{
    char s1[30],s2[30], *p1, *p2;
    printf("Enter the string:\n");
    scanf("%s",s1);
    p1=s1;
    p2=s2;
    while(*p1)
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2='\0';
    printf("%s is the copied string\n",s2);
    return 0;
}
