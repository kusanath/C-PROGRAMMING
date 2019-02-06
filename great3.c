/*programe to find greatest of three numbers
author : kusanath R
date: 06/02/2019
*/

#include<stdio.h>
void main()
{
   int number1,number2,number3,big=0;
   printf("\nenter integers number1 and number2and number3:");
   scanf("%d%d%d",&number1,&number2,&number3);
   /*checks wheather number1 or number2 or number3 is greatest*/
    if(number1>big)
     { 
       big=number1;
     }
    if(number2>big)
     {
       big=number2;
     }
    if(number3>big)
     {
       big=number3;
     }
   printf("greatest among%d,%d,%d is %d",number1,number2,number3,big);
}
    
