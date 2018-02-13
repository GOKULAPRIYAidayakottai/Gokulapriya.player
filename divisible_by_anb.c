

#include <stdio.h>

int main()
{
   int a,b,i;
   printf("enter a and b");
   scanf("%d%d",&a,&b);

   for(i=1;;i++)
   {
       if(((i%a)==0)&&((i%b)==0))
       {
           printf("smallest number which is divisible by both a and b is %d",i);
           break;
       }
   }
   
    return 0;
}








