#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b;
char op;
printf("\n enter the number:");
scanf("%d %s %d",&a,&op,&b);
if((a&&b)>0)
{
if(op=='/')
{
printf("%d",a/b);
}
else if(op=='%')
{
printf("%d",a%b);
}
else if(b==0)
{
printf("\n arithmetic exception");
}
else
{
printf("\n enter the valid numbers!");
}
}
return 0;
}
