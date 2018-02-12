#include <stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,n,avg,sum=0;
	printf("\n enter the total no of numbers:");
	scanf("%d",&n);
	printf("\nEnter the %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];
	}
	avg=sum/n;
	printf("\n the average is: %d",avg);
	getch();
	return 0;
	}
