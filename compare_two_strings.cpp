
#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char s1[20],s2[20];
	int i,l=0,k=0,count=0;

	cout<<"enter the two strings: ";
	cin>>s1;
	cin>>s2;
	for(i=0;s1[i]!='\0';i++)
	{
	    l++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
	    k++;
	}

	if(l==k)
	{
	
			for(i=0;i<l;i++)
		{
			if(s1[i]==s2[i])
			{
				count++;
			}
		}
		if(count==l)
		{
			cout<<"\nstrings are equal";
		}
		else
		{
			cout<<"\nstrings are not equal";
		}
	}

	
	else
	{
	    	cout<<"\nstrings are not equal";
	}

		
    return 0;
}










