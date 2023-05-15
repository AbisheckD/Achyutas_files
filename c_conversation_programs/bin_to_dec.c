#include<stdio.h>
int main()
{
  int r,n,sum=0,b=1;
  printf("Enter the binary value: ");
  scanf("%d",&n);
  while(n>0)
  {
    r=n%10;
    sum=sum+r*b;
    b*=2;
    n/=10;
  }
  printf("%d",sum);
  return 0;
}
