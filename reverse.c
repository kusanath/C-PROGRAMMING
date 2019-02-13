/*program to print reverse of a number
author:KUSANATH.R
date:13/02/2019
*/

#include<stdio.h>
int main()
{
   int number,rev=0,digit; 
   printf("enter number:");
   scanf("%d",&number);
   while(number>0)
     {
       digit=number%10;
       rev=rev*10+digit;
       number=number/10;
     }
   printf("reverse of the number entered is %d\n",rev);
}
   
