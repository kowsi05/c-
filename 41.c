#include <stdio.h>
int main()
{
	int i,n;
	char a[100];
	printf("\n enter the no of times:");
	scanf("%d",&n);
	printf("\n enter the string:");
	scanf("%s",&a);
	for(i=0;i<n;i++)
	{
		printf("\n %s",a);
	}
	return 0;
}
