#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,max;
	printf("\n enter the 10 numbers");
    for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<10;i++)
	{
	if(a[i]>max)
	{
		max=a[i];
	}
	}
	printf("%d",max);
	getch();
	return 0;
}
