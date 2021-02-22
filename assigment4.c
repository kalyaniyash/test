#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j=-1,n,c=0;
	gets(s);
	n=strlen(s);
	if(n%2==0)
	{
		for(i=0;i<n;i+=2)
		{
			j+=2;
			if((s[i]=='('&&s[j]==')')||(s[i]=='['&&s[j]==']')||(s[i]=='{'&&s[j]=='}'))
			 c++;
			else
		     c--;
		}
		if(c==(n/2))
		 printf("true");
		else
		 printf("false");
	}
	else
	{
		printf("false");
	}
}
