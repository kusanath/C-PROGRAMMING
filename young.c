/*program to find who is younger among the given ages 
author;KUSANATH R
date;20/02/2019
*/

#include<stdio.h>
void main()
{
  int ramage,shyamage,ajayage;
   printf("enter the ages of ram,shyam and ajay:");
   scanf("%d%d%d",&ramage,&shyamage,&ajayage);
     
   if(ramage<shyamage&&ramage<ajayage)
     {
      printf("ram is the youngest\n");
     }
   if(shyamage<ramage&&shyamage<ajayage)
     {
       printf("shyam is the youngest\n");
      }
   if(ajayage<ramage&&ajayage<shyamage)
     {
       printf("ajay is the youngest\n");
      }
   
   
}
