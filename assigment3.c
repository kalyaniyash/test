#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],x[100],y[100],*p;
	int i,j,n,c=0;
	gets(s);
	n=strlen(s);
	for(i=0,j=n-1;i<n;i++,j--)
	{
		x[j]=s[i];
	}
	for(i=0;i<n;i++)
	{
		if(x[i]=='a' ||x[i]=='e' ||x[i]=='i' ||x[i]=='o' ||x[i]=='u' ||x[i]=='A' ||x[i]=='E' ||x[i]=='I' ||x[i]=='O' ||x[i]=='U')
		{
			y[c]=x[i];
			c++;
		}
	}
	c=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
		{
			s[i]=y[c];
			c++;
		}
	}
	puts(s);
}
