#include <stdio.h>
void main()
{
 int rem,num,rev=0,count=1;
 printf("enter a number");
 scanf("%d",&num);
 while(num>0)
  {
    rem=num%8;
    rev=rev+(rem*count);
    count=count*10;
    num=num/8;
  }
   printf("%d",rev);
}
