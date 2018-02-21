#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("\n Enter the number:");
scanf("%d",&n);
if(n%2!=0)
{
n=n-1;
printf("\n%d",n);
}
else
{
printf("\n%d",n);
}
getch();
return 0;
}
