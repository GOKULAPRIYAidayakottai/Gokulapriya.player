#include<stdio.h>
void main()
{
int s,e,i,j,count=0;
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
for(j=2;j<=(i/2);j++)
{
if((i%j)==0)
{
count++;
}
}
if(count==0)
{
printf("%d",i);
}
count=0;
}
}
