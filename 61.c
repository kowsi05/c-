#include<stdio.h>
#include<conio.h>
int main()
{
char a[10];
int n,i;
printf("\n enter the string:");
gets(a);
printf("\n enter the number:");
scanf("%d",&n);
for(a[i]=0;a[i]<=n;i++)
{
printf("\n%c",a);
}
getch();
return 0;
}
