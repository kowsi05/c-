#include<stdio.h>
#include<conio.h>
int main()
{
int n,rem,qut,sum=0;
printf("\n enter the number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
qut=n/10;
sum=rem+qut;
}
printf("\n%d",sum);
getch();
return 0;
}
