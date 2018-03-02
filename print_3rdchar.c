

#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
int i,j,l=0;

printf("enter the string");
scanf("%s",&s);
l=strlen(s);
if((l>1)&&(l<100000))
{
printf("%c",s[0]);
j=strlen(s);
for(i=1;i<j;i++)
{
if((i%3)==0)
{
printf("%c",s[i]);
}
}
}
else
{
    printf("input size must with in 1 to 100000");
}

    return 0;
}



