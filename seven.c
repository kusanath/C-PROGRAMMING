#include<stdio.h>
void main()
{
 float n=7,sum=0,i,fact=1;
 for(i=1;i<=n;i++)
  {
    fact=fact*i;
    sum=sum+(1/fact);
    }
   printf("sum of the series is %f",sum);
}
