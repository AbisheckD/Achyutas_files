#include <stdio.h>
int main()
{
    char ascii;
    int integer;

    printf("Enter an ASCII character: ");
    scanf("%c", &ascii);
    
    integer = (int)ascii; 
    printf("The integer value of '%c' is %d\n", ascii, integer);
    return 0;
}
