
#include <stdio.h>

int main()
{
    char s[20];
int i,j;

printf("enter the string");
scanf("%s",&s);
printf("%c",s[0]);
j=strlen(s);
for(i=1;i<j;i++)
{
if((i%3)==0)
{
printf("%c",s[i]);
}
}

    return 0;
}



