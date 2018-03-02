
#include <stdio.h>
#include<string.h>
int main()
{
    int n,i;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((n%i)==0)
{
if((i%2)==0)
{
printf("%d  ",i);
}
}
}
    return 0;
}


