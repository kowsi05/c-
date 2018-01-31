#include <stdio.h>
int main()
{
	int hr1,hr2,min1,min2,res,res1;
	printf("\nenter the hr1,min1:");
	scanf("%d %d",&hr1,&min1);
	printf("\nenter the hr2 min2");
	scanf("%d %d",&hr2,&min2);
	if(hr1>hr2)
	{
	res=hr1-hr2;
	}
	else
	{
	 res=hr2-hr1;	
	}
	if(min1>min2)
	{
	res1=min1-min2;
	}
	else
	{
             res1=min2-min1;
	}
	printf("\n%d %d",res,res1);
	return 0;
	}
