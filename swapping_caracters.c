

#include <stdio.h>

int main()
{
    char a[20],t;
    int i,j;
    printf("\nenter the string");
    scanf("%s",&a);
    for(i=0,j=1;(a[i]!='\0'&&a[i]!='\0');i=i+2,j=j+2)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("\nafter swap odd and even characters");
    for(i=0;a[i]!='\0';i++)
    {
      printf("%c",a[i]);  
    }

    return 0;
}



