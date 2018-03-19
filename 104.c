#include<stdio.h>
#include<conio.h>
int main()
{
int n,k,i,pow=1;
printf("\n enter the value and power:");
scanf("%d%d",&n,&k);
while(k!=0)
{
pow=pow*n;
--k;
}
printf("%d",pow);
getch();
return 0;
}
