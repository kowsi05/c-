#include<stdio.h>
#include<conio.h>
int main()
{
int n,n1,n2,n3;
printf("\n enter the number:");
scanf("%d",&n);
n1=n/100;
n2=(n%100)/10;
n3=(n%100)%10;
printf("\n %d %d %d",n1,n2,n3);
getch();
return 0;
}
