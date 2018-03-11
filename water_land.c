
#include <stdio.h>
int main()
{
   int a[5][5],i,j,n,c=0;
   printf("enter the array size : ");
   scanf("%d",&n);
   printf("enter array elements (0's and 1's only) ");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(a[i][j]==1)
           {
           if((a[i][j-1]==0)&&(a[i][j+1]==0)&&(a[i-1][j]==0)&&(a[i+1][j]==0))
           {
               c++;
           }
           }
       }
   }
   printf("no.of Islands  = %d",c);
    
    return 0;
}
