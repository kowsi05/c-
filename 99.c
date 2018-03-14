#include <stdio.h>
#include<conio.h>
int main()
{
int a,b,c,res;
printf("Enter the value for a,b, and c :");
scanf("%d%d%d", &a,&b,&c);
res=(a*b)%c;
printf("%d",res);
return 0;
}
