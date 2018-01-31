#include <stdio.h>
int main()
{
	int n,i,a[100];
	printf("\n Enter the no of array elements:");
	scanf("%d",&n);
	printf("\nEnter the %d array elements:",n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%d",a[i],i);
	}
	return 0;
}
