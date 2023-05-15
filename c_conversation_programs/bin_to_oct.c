#include<stdio.h>
#include<math.h>
int main()
{
  long int r,sum=0,b=0,n;
  printf("Enter the binary value: ");
  scanf("%ld",&n);
  while(n>0)
  {
    r=n%10;
    sum=sum+r*pow(2,b);
    b++;
    n/=10;
  }
  printf("%lo",sum);
  return 0;
}
