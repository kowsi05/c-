#include <stdio.h>
int main()
{
	int a[50],i,n,low,high;
	printf("\n enter the total no of numbers:");
	scanf("%d",&n);
	printf("\nEnter the %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	low=a[0];
	for(i=0;i<n;i++)
	{
		
	if(a[i]<low)
	{
	   low=a[i];
		
	}
	}
	printf("\n %d",low);
	high=a[0];
	for(i=0;i<n;i++)
	{
	if(a[i]>high)
	{
	high=a[i];
	}
	}
	printf("\n%d",high);
	return 0;
}
