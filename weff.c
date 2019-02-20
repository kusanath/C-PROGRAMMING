/*program to find efficiency of worker
author:KUSANATH R
date:20/02/2019
*/
#include<stdio.h>
void main()
{
  float time,efficiency;
  printf("enter the time taken by the worker\n");
  scanf("%f",&time);
  if(time>2 && time<3)
   {
    printf("the worker is highly EFFICIENT\n");
   }
  else if(time>3 && time<4)
   {
    printf("the worker is ordered to improve SPEED\n");
   }
  else if(time>4 && time<5)
   {
     printf("the worker needs TRAINING to improve his speed\n");
    }
  else if(time>5)
   {
    printf("the worker is TERMINATED\n");
    }
}
