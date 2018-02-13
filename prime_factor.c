

#include <stdio.h>

int main()
{
   int n,k=0,i,j,a[10],count=0;
   printf("enter the number ");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
       if((n%i)==0)
       { 
           for(j=2;j<1;j++)
           {
           if((i%j)!=0)
           {
               count++;
           }
           }
           if(count==0)
           {
               a[k]=i;
               k++;
           }
       }
   }
   printf("prime factors are ");
   for(i=0;i<--k;i++)
   {
       printf("%d ",a[i]);
   }

    return 0;
}


