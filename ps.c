#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,n,i,temp;
printf("\n enter the 2 number:");
scanf("%d%d",&n1,&n2);
n=n1*n2;
for(i=1;i<=n;i++)
{
if((i*i)==n)
{
temp=1;
break;
}
}
if(temp==1)
{

printf("\n yes");
}
else
{
    printf("\n no");
}
getch();
return 0;
}
