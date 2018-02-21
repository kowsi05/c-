#include<stdio.h>
#include<conio.h>
int main()
{
int n,m;
printf("\n enter n and m values:");
scanf("%d%d",&n,&m);
if((n%2==0&&m%2==0)||(n%2!=0&&m%2==0)||(n%2==0&&m%2!=0))
{
printf("\neven");
}
else
{
printf("\nodd");
}
getch();
return 0;
}
