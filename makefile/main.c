#include<stdio.h>
#include"header.h"
int main()
{
	printf("I am in main.c\n");
	printf("I have moved to hello\n");
	hello();
	printf("I have moved to add\n");
	add(100,100);
	printf("I am back in main.c\n");
	return 0;
}
