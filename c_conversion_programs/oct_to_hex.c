#include<stdio.h>
#include<math.h>
int main()
{
  int r,b=0,sum=0,n,ans=0;
  printf("Enter octal value: ");
  scanf("%d",&n);
  while(n>0)
  {
	r=n%10;
	sum=sum+r*pow(8,b++);
	n/=10;
  }
b=0;
  while(sum>0)
  {
	r=sum%16;
	ans=ans+r*pow(10,b++);
	sum/=16;
  }
  printf("%d",ans);
  return 0;
}
