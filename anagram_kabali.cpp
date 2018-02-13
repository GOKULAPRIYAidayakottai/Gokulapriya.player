

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char c[5]={'k','a','b','l','i'};
   char a[20][20];
   int i,j,k,count=0,n,temp=0,l;
cout<<"enter the number of strings";
  cin>>n;
  cout<<"enter the strings";
   for(i=0;i<n;i++)
   {
   cin>>a[i];
  }

  for(i=0;i<n;i++)
  {
      l=strlen(a[i]);
      
      for(j=0;j<l;j++)
      {
          for(k=0;k<5;k++)
          {
            if(a[i][j]==c[k])
            {
              count++;
            }
          }
      }
      
      if(count==l)
      {
          temp++;
      }
      count=0;
      l=0;
  }
  cout<<'\n'<<temp;

   

    return 0;
}



