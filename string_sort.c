
#include <stdio.h>
#include<string.h>

int main()
{
    char str[20][20],temp[20];
   int i,j,n,count=0,k;
printf("enter the no of string");
   scanf("%d",&n);
 printf("enter the strings");
   for(i=0;i<n;i++)
   {
     scanf("%s",&str[i]);
    }
   printf("%s",str[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=0;str[k]!='\0';k++)
            {
                if(str[i][k]>str[j][k])
                {
                    count++;
                }
            }
            
            if(count!=0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
            count=0;
        }
    }
   printf("strings in ascending order");
    for(i=0;i<n;i++)
   {
      printf("%s",str[i]);
    }
          

    return 0;
}


