#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,count=0;
printf("\n enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("\n no");
}
else
{
printf("\n yes");
}
getch();
return 0;
}
