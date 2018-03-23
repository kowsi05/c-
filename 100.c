#include<stdio.h>
#include<conio.h>
int main()
{
int n,rem,prod=1;
printf("\n enter the number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
prod=prod*rem;
n=n/10;
}
printf("%d",prod);
getch();
return 0;
}
