#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("\n enter the numbers n1 and n2:");
scanf("%d%d",&a,&b);
if((a%2==0)&&(b%2==0)||(a%2!=0)&&(b%2!=0))
{
printf("\n even");
}
else
{
printf("\n odd");
}
getch();
return 0;
}
