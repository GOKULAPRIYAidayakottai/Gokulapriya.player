/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string.h>
void strcopy(char a[10],char b[10]);
using namespace std;

int main()
{
    char str[20][20],temp[20];
   int i,j,n,count=0,k;
  cout<<"enter the no of string";
   cin>>n;
   cout<<"enter the strings";
   for(i=0;i<n;i++)
   {
       cin>>str[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=0;str[k]!='\0';k++)
            {
                if(str[i][k]>str[j][k])
                {
                    count++;
                }
            }
            
            if(count!=0)
            {
                strcopy(temp,str[i]);
                strcopy(str[i],str[j]);
                strcopy(str[j],temp);
            }
            count=0;
        }
    }
   cout<<"strings in ascending order";
    for(i=0;i<n;i++)
   {
       cout<<str[i];
    }
          

    return 0;
}
void strcopy(char *a[10],char *b[10])
{
    int i,l=0;
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
  
    for(i=0;i<l;i++)
    {
     *a[i]=*b[i];   
    }
}


