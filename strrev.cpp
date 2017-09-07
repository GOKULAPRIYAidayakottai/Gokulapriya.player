#include<iostream.h>
#include<string.h>
void main()
{
int i,j;
char str[100],temp;
i=0;
printf("\nEnter the string :");
gets(str);
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
cout<<"reversed string is"<<str;
}

