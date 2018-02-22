

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[10];
    int l,i;
    printf("enter the string");
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
        printf("%c",tolower(s[i]));
        }
        else
        {
            printf("%c",toupper(s[i])); 
        }
    }

    return 0;
}

