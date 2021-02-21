#include<stdio.h>
int main()
{
	int a[100],n,i,j,b[100],t;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elemnts:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		j=i+1;
		b[i]=a[i]*a[j];
		printf("%d ",b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]<b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	printf("\n%d",b[0]);
}
