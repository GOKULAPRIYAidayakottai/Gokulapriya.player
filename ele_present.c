
#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,arr[20],i,c=0;
    printf("enter the no.of elements:");
    scanf("%d",&a);
    printf("enter the element to be search:");
    scanf("%d",&b);
    printf("enter array elements");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]==b)
        {
            c++;
            printf("yes");
            break;
        }
    }
    if(c==0)
    {
        printf("no");
    }

    return 0;
}



