#include <stdio.h>

int main()
{
    char a[20],b[20];
    int count=0,i,k;
    printf("enter the strings");
    scanf("%s%s",&a,&b);
    printf("enter k value");
    scanf("%d",&k);
    for(i=0;(a[i]!=0&&b[i]!=0);i++)
    {
        if(a[i]!=b[i])
        {
            count++;
        }
    }
    if(count==k)
    {
        printf("strings are differ from k character");
    }
    else
    {
        printf("strings are not differ from k character ");
    }
    return 0;
}
