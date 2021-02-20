#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,r;
	scanf("%d",&n);
	while(n>=1)
	{
		r=n%10;
		t=t*10+r;
		n=n/10;
	}
	printf("%d",t);
}
