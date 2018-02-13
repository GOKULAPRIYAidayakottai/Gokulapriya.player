

#include <stdio.h>

int main()
{
   int a[20],i,j,count=0,n;
   printf("enter the number of element");
   scanf("%d",&n);
   printf("enter all the element");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("unique elements are  ");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==j)
           {
            continue;   
           }
           else
           {
               if(a[i]==a[j])
               {
                   count++;
               }
           }
       }
       if(count==0)
       {
           printf("%d",a[i]);
       }
       count=0;
   }
   
    return 0;
}



