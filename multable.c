#include<stdio.h>
void main()
{
 int n,i,prod=1;
 printf("enter the number;");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
  {
    prod=n*i;
    printf("%d*%d=%d\n",n,i,prod);
  }
}
