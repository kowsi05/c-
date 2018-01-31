#include <stdio.h>
int main()
{
	int n,k,a[100],sum=0,i;
	printf("\n Enter the value for n,k :");
	scanf("%d%d",&n,&k);
	printf("\nEnter the %d array elements",n);
    for(i=0;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
    	sum=sum+a[i];
    }
    printf("\n%d",sum);
    return 0;
}
