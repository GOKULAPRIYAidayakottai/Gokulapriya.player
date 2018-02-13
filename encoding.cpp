

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char str[20];
   int i,l;
   cout<<"enter the string";
   cin>>str;
   l=strlen(str);
   for(i=0;i<l;i++)
   {
      str[i]=str[i]+3; 
      cout<<str[i];
   }

    return 0;
}





