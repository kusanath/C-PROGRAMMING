/*check wheather amstrong number or not
author:KUSANATH R
date:13/02/2019
*/

#include<stdio.h>
void main()
{
  int num,amstr=0,digit,n;
  n=num;
  printf("enter integer number:");
  scanf("%d",&num);
  while(num>0)
   {
     digit=num%10;
     amstr=amstr+digit*digit*digit;
     num=num/10;
   }
  if(n=amstr)
     {
       printf("%d is an amstrong number\n",n);
     }
  else
      {
        printf("%d is not an amstrong number\n",n);
      }
}
