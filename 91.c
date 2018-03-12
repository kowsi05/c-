#include<stdio.h>
#include<conio.h>
int main()
{
int l,b,h,ta,v;
printf("\n enter the l,b,h values::");
scanf("%d%d%d",&l,&b,&h);
ta=(2*l*b)+(b*h*2)+(h*l*2);
v=l*b*h;
printf("\nvolume:%d",v);
printf("\ntot surf area:%d",ta);
getch();
return 0;
}
