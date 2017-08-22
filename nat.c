#include<stdio.h>
void main()
{
int n,sum=0;
printf("Enter the natural number upto which find the sum:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("the sum is%d",sum);
}
