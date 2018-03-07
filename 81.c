#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2;
printf("\n enter the two number:");
scanf("%d%d",&n1,&n2);
if(n1>n2)
{
printf("%d",n1-n2);
}
else
{
printf("%d",n2-n1);
}
return 0;
}
