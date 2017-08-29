#include<stdio.h>
void main()
{
int n,i=0;
printf("Enter the number:");
scanf("%d",&n);
while(n>0)
{
n=n/10;
i++;
}
printf("the no of digits are:",i);
}

