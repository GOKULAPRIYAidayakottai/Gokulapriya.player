

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char a[20],b[20];
   int i,l=0,j=0;
   printf("enter the string");
   scanf("%[^\n]s",&a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
      if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U');
      else
      {
         b[j]=a[i];
         j++;
      }
      
   }
   printf("string after removing vowels is=%s",b);

    return 0;
}



