
#include <stdio.h>
#include<math.h>
int main()
{
    int n1,n2,i,pro=0,j;
printf("enter the limit");
scanf("%d%d",&n1,&n2);

for(i=n1;i<=n2;i++)
{
    for(j=1;j<n2;j++)
    {
if(pow(j,2)==i)
{
pro++;
break;
}
}
}
printf("number of perfect square in the given range = %d",pro);

    return 0;
}
