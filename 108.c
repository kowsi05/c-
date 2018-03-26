#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,n3,sum,dif;
printf("\n enter the 3 numbers:");
scanf("%d%d%d",&n1,&n2,&n3);
dif=n3-n2;
sum=(n1+2*dif);
printf("%d",sum);
getch();
return 0;
}
