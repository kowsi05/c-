#include <stdio.h>
int main()
{
	int n1,n2,temp=0;
	printf("\nenter two numbers:");
	scanf("%d%d",&n1,&n2);
	temp=n1;
	n1=n2;
	n2=temp; 
	printf("the swaped numbers are:%d\n%d",n1,n2);
	
	return 0;
}
