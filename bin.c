#include<stdio.h>
void bin(int num);
void main()
{
 int num;
 printf("enter the number:");
 scanf("%d",&num);
 bin(num);
 }
 void bin(int num)
 {
  int rem,rev=0,count=1;
  while(num!=o)
   {
     rem=num%2;
     rev=rev+(rem*count);
     count=count*10;
     num=num/2;
     }
     printf("binary value is %d",rev);
}       
