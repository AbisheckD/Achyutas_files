#include<stdio.h>
#include<string.h>
int main()
{
  char hexnum[20];
  int count=0;
  printf("Enter hexa value: ");
  scanf("%s",hexnum);
  while(hexnum[count])
  {
    switch(hexnum[count])
    {
       	case '0' :printf("0000");
		 break;
         case '1' : printf("0001");
                 break;
         case '2' : printf("0010");
                  break;
         case '3' : printf("0011");
                  break;
         case '4' : printf("0100");
                  break;
         case '5' : printf("0101");
                  break;
         case '6' : printf("0110");
                  break;
         case '7' : printf("0111");
                  break;
         case '8' : printf("1000");
                  break;
         case '9' : printf("1001");
                  break;
         case 'a' & 'A' : printf("1010");
                  break;
         case 'b' & 'B' : printf("1011");
                  break;
         case 'c' & 'C' : printf("1100");
                  break;
         case 'd' & 'D' : printf("1101");
                  break;
         case 'e' &  'E' : printf("1110");
                  break;
         case 'f' & 'F' : printf("1111");
                  break;
         default:printf("Invalid Entry\n");
      }
   count++;
   }
   return 0;
}
