#include<stdio.h>
#include<conio.h>
int main()
{
int n,a[100],i,sum=0;
printf("\n enter the number:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n %d",sum);
getch();
return 0;
}
