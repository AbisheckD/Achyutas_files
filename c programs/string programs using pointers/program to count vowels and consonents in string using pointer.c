#include<stdio.h>
int main()
{
    int c1=0,c2=0,i;
    char str[30];
    printf("Enter the string:\n");
    scanf("%s",str);
    char *p= str;
    for(i=0; *p; i++)
    {
        if(*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U' || *p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' )
        {
            c1++;
        }
        else
        {
            c2++;
        }
        p++;
    }
    printf("No of vowels in string = %d\n",c1);
    printf("No of consonents in string = %d\n",c2);
    printf("Total no of words = %d\n",c1+c2);
    return 0;
}
