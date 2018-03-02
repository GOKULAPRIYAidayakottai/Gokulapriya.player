#include <stdio.h>
#include<string.h>
int main()
{
    int n,t,r,c;
printf("enter the number:");
scanf("%d",&n);
printf("enter the number to be check");
scanf("%d",&t);
if((n>1)&&(n<100000)&&(t>0)&&(t<9))
{
while(n>0)
{
r=n%10;
if(r==t)
{
c++;
}
n=n/10;
}
printf("no.of occurance=%d",c);
}
else
{
    printf("invalid input");
}
    return 0;
}


