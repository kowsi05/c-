#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,i;
printf("\n enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
return 0;
}
