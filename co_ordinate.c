
#include <stdio.h>

int main()
{
   int a[3][2],i,j;
   printf("enter the 3 co-ordinate points");
   for(i=0;i<3;i++)
   {
       for(j=0;j<2;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<3;i++)
   {
       if(a[i][0]==a[i][1])
       {
          printf("(%d,%d) is lies on same co-ordinate",a[i][0],a[i][1]); 
       }
       else
       {
          printf("(%d,%d) is not lies on same co-ordinate",a[i][0],a[i][1]);  
       }
   }
    return 0;
}



