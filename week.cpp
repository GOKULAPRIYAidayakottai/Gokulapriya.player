#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    
    char s[20];
  
    cout<<"enter the day  ";
    cin>>s;
   switch(s[0])
   {
       case 'm':
       case 'w':
       case 't':
       case 'f':cout<<"working day";
                break;
       case 's':cout<<"holiday day";           
                          
   }
   
    return 0;
}
