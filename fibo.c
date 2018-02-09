#include <stdio.h>
int main()
{
	int n,i,a=0,b=1,temp;
	printf("\nenter the number upto which u want to find fibbonocci series:");
	scanf("%d",&n);
	printf("the fibbonocci series");
	for(i=1;i<=n;i++)
	{
	if(n==1)
	{
		temp=i;
	}
	else
	{
		a=b;
		b=temp;
		temp=a+b;
	}
	printf("\n%d",temp);	
	}
	return 0;
}
