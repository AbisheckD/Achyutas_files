#include<stdio.h>
#include<math.h>
int main()
{
  long int r,sum=0,b=0,n,decimal,i,a[20];
  printf("Enter octal value: ");
  scanf("%ld",&n);
  while(n>0)
  {
	r=n%10;
	sum=sum+r*pow(8,b++);
	n/=10;
  }
 i=0;
 for(i=0;sum>0;i++)
 {
	a[i]=sum%2;
	sum/=2;
 }
 for(i=i-1;i>=0;i--)
 {
	printf("%ld",a[i]);
 }
 return 0;
}
