#include <stdio.h>
#include<conio.h>
int main()
{
	int n,i,a=0,b=1,temp;
	printf("\nenter the number upto which u want to find fibbonocci series:");
	scanf("%d",&n);
	printf("the fibbonocci series");
	printf("%d",b);
	for(i=0;i<n-1;i++)
	{
	if(n==1)
	{
		temp=i;
	}
	else
	{

		temp=a+b;
		a=b;
		b=temp;
	}


	printf("\n%d",temp);
	}
	getch();
	return 0;
}
