#include <iostream>
#include<string.h>
using namespace std;

void main()
{
    
    char s[20];
    int l;
    cout<<"enter the string";
    cin>>s;
    l=strlen(s);
    s[l]='.';
    cout<<"string is "<<s;
 
}
