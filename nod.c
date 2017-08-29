#include<stdio.h>
void main()
{
int n,i;
printf("Enter the number:");
scanf("%d",&n);
while(n>0)
{
n=n/10;
i++;
}
printf("the no of digits are:",i);
}

