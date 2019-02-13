/* program to check number is a paliantrome
author:KUSANATH.R
date:13/02/2019
*/
 
#include<stdio.h>
void main()
{
  int number,num1,rev=0,digit; 
   printf("enter number:");
   scanf("%d",&number);
   num1=number;
   while(number>0)
     {
       digit=number%10;
       rev=rev*10+digit;
       number=number/10;
     }
   if(rev==num1)
     {
       printf("%d is a paliantrome number",num1);
     }
   else
     {
       printf("%d is not a paliantrome number",num1);
     }
}
   
