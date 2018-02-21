#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,temp;
printf("\n enter the number:");
scanf("%d%d",&n1,&n2);
temp=n1;
n1=n2;
n2=temp;
printf("%d\n%d",n1,n2);
getch();
return 0;
}
