#include<stdio.h>
#include<conio.h>
int main()
{
int n,l,r,i,temp;
printf("\n enter the number,left limit,right limit:");
scanf("%d%d%d",&n,&l,&r);
for(i=(l+1);i<=r;i++)
{
if(n>l&&n<r)
{
temp=1;
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
