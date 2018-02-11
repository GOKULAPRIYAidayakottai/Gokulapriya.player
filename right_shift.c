
#include <stdio.h>

int main()
{
   int n,k,i,a[10],t,j;
   printf("enter the no of elements");
   scanf("%d",&n);
  printf("enter no of times you want to right shift");
  scanf("%d",&k);
   printf("enter array elements");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=0;j<k;j++)
   {
   t=a[n-1];
   for(i=n-2;i>=0;i--)
   {
       a[i+1]=a[i];
   }
   a[0]=t;
   }
    for(i=0;i<n;i++)
   {
       printf("%d",a[i]);
   }
   
   
    return 0;
}

