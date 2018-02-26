#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2;
printf("\n enter the numbers n1 and n2:");
scanf("%d%d",&n1,&n2);
if((n1%2==0)&&(n2%2==0)||(n1%2!=0)&&(n2%2!=0))
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
