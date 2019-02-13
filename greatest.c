#include<stdio.h>
void main()
{
 int a,b,big=0;
 printf("enter num1 and num2:");
 scanf("%d %d",&a,&b);
 if(a>big)
  {
    big=a;
  }
 if(b>big)
  {
    big=b;
  }
 printf("greatest is %d",big);
}
