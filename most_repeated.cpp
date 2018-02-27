

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char a[20],t;
   int i,l=0,j,count=0,max=0;
   printf("enter the string");
   scanf("%[^\n]s",&a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
      for(j=i+1;j<l;j++)
      {
          if(a[i]==a[j])
          {
              count++;
          }
      }
      if(count>max)
      {
          max=count;
          t=a[i];
      }
      count=0;
   }
   printf("most repeated letter is=%c",t);

    return 0;
}



