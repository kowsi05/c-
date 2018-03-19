#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("\n enter the number:");
scanf("%d",&num);
if(num%2==0)
{
num=num/2;
printf("%d",num);
}
else
{
printf("%d",num);
}
getch();
return 0;
}
