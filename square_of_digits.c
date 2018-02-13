

#include <stdio.h>

int main()
{
   int n,a,i,t,s=0;
   printf("enter the number");
   scanf("%d",&n);
   a=n;
   while(n>0)
   {
       t=n%10;
       s=s+t*t;
       n=n/10;
   }
   printf("sum of square of each digits in %d is %d",a,s);

    return 0;
}






