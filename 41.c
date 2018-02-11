#include <stdio.h>
int main()
{
	int i,k;
	char a[100];
	printf("\n enter the string:");
	scanf("%s",&a);
	printf("\n enter the no of times:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("\n %s",a);
	}
	return 0;
}
