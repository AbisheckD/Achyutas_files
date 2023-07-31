#include<stdio.h>

void string_concat(char*, char*);
void string_compare(char*, char*);

int main()
{
    char s1[30], s2[30],s3[30], s4[30];
    printf("Enter the string 1 to concat:\n");
    scanf("%s",s1);
    printf("Enter the string 2to concat:\n");
    scanf("%s",s2);
    string_concat(s1, s2);
    printf("Enter the string 3 to compare:\n");
    scanf("%s",s3);
    printf("Enter the string 4 to compare:\n");
    scanf("%s",s4);
    string_compare(s3, s4);
    return 0;
}

void string_concat(char *s1, char *s2)
{
    int i,c=0;
    for(i=0; s1[i]; i++)
    {
        c++;
    }
    for(i=0; s2[i]; i++)
    {
        s1[c] = s2[i];
        c++;
    }
    s1[c]='\0';
    printf("The concat string is:  %s\n",s1);
}

void string_compare(char *s3, char *s4)
{
    int c1=0, c2=0, count=0;
    for(int i=0; s3[i]; i++)
    {
        c1++;
    }
    printf("%d is length of string 3\n",c1);
    for(int i=0; s4[i]; i++)
    {
        c2++;
    }
    printf("%d is length of string 4\n",c2);
    if(c1 == c2)
    {
        for(int i=0; s4[i]; i++)
        {
            if(s3[i] == s4[i])
            {
                count++;
            }
        }
    }
    //printf("count value = %d\n",count);   //to check the value of count
    if(c1 == count)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }
}
