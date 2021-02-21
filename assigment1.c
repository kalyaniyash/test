#include<stdio.h>
int main()
{
	int a[100],n,target,i,index=-1;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elemnts:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the target number:");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		if(target==a[i])
		{
			index=i;	
		}
	}
	printf("\n%d",index);
}
