//Given a string S, return the "reversed" string where all characters that are not a letter stay in the same place, and all letters reverse their positions.
#include<stdio.h>
#include<string.h>   
int main()
{
	char s[100],a[100],*x,y[100];
	int i,n,c,z,j;
	gets(s);
	n=strlen(s);
	c=0;
	for(i=0;i<n;i++)
	{
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
		{
			a[c]=s[i];
			c++;
		}
	}
	puts(a);
	x=strrev(a);
	puts(x);
	z=0;
	for(i=0;i<n;i++)
	{
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
		{
			y[i]=x[z];
			z++;
		}
		else
		{
			y[i]=s[i];
		}
	}
	puts(y);
}
