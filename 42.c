#include <stdio.h>
int main()
{
	int l1,l2;
	char s1[50],s2[50];
	printf("\n enter the string1:");
	scanf("%s",s1);
	printf("\n enter the string2:");
	scanf("%s",s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1>l2)
	{
		printf("\n%s",s1);
	}
	else if(l2>l1||l1==l1)
	{
		printf("\n%s",s2);
	}
	
	return 0;
}
