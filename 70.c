#include<stdio.h>
#include<conio.h>
int main()
{
int n,count=0,i,t=1;
printf("\n enter the no:");
scanf("%d",&n);
while(n!=1)
{
n=n/2;
count++;
}
for(i=0;i<=count;i++)
{
t=t*2;
}
printf("%d",t);
getch();
return 0;
}
