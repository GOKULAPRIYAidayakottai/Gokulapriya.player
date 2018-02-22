
#include <stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int l,i,j,k,count=0;;
   
    printf("enter the string");
    scanf("%[^\n]s",s);
    
    l=strlen(s);
    for(i=0;i<l;i++)
    {
      if(s[i]==32) 
      { 
          if(count=0)
          {
              continue;
          }
          else
          {
          for(j=i;j<l;j++)
          {
              count=1;
              k=j+1;
              s[j]=s[k];
          }
          }
      }
        
    }
    printf("%s",s);
    

    return 0;
}




