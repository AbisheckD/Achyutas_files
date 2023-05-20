#include<stdio.h>
#include<math.h>
int main()
{
  long int r,b=0,sum=0,n;
  printf("Enter a binary value: ");
  scanf("%ld",&n);
  while(n>0)
  {
    r=n%10;
    sum=sum+r*pow(2,b++);
    n/=10;
  }
  printf("%lx",sum);
  return 0;
}
