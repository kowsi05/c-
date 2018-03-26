#include <stdio.h>
#include<conio.h>
int main()
{
int a[50],n,i,ch;
printf("enter no of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ch = a[0];
for (i = 1; i < n; i++)
{
if (a[i] < ch)
{
ch = a[i];
}
}
printf("%d",ch);
getch();
return 0;
}
