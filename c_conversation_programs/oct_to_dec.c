#include<stdio.h>
#include<math.h>
int main()
{
  long int i,n,r,b=0,sum=0;
  printf("Enter octal value: ");
  scanf("%ld",&n);
  while(n>0)
  {
	r=n%10;
	sum=sum+r*pow(8,b++);
        n/=10;
  }
  printf("%ld",sum);
 return 0;
}
