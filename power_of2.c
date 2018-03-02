
#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,c=0;
printf("enter the numeber");
scanf("%d",&n);
for(i=1;i<(n/2);i++)
{
if(pow(2,i)==n)
{
printf("yes");
c++;
break;
}
}
if(c==0)
{
printf("no");
}
    return 0;
}

