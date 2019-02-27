 /* Inverted half pyramid using *

   * * * * *
   * * * *
   * * * 
   * *
   *
author;KUSANATH R
date;27/02/2019
 */
  
#include<stdio.h>
int main()
 {
   int limit,i,j;
   printf("enter the limit");
   scanf("%d",&limit);
   for(i=limit;i>0;i--)
    {
     for(j=0;j<i;j++)

        printf("*\t");
         printf("\n");
     }
 }
         
        
