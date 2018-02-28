#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("\n enter the no:");
	scanf("%d",&n);
	while(n%10!=0)
	{
	n=n+1;	
	}
	printf("%d",n);
	getch();
	return 0;
}
