//You are given a string s, return the number of segments in the string. 

#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],segment=1;
	int i,n;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]== ' ')
		{
			segment++;
		}
	}
	printf("%d",segment);
}
