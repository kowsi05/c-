#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the no:");
scanf("%d",&n);
if(n>0)
{
printf("the no is positive:");
}
else if(n<0)
{
printf("the no is negative");
}
else
{
printf("the no is zero:");
}
getch();
}
