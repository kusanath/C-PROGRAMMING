/*program to print 24 hours of a day with suitable suffixes like AM, PM,NOON and MIDNIGHT
  author:KUSANATH R
  date:27/02/2019
 */
  

#include<stdio.h>
void main()
{
  int i,j;
  printf("12 MIDNIGHT\n");
  for(i=1;i<11;i++)
    printf("%d AM\n",i);
   printf("12 NOON\n");
  for(j=1;j<=11;j++)
   printf("%d PM\n",j);
}

