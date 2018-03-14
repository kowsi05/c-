#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int tm,si;
float am,rt;
printf("\n enter the amount,time,rate:");
scanf("%f%d%f",&am,&tm,&rt);
si=(am*tm*rt)/100;
floor(si);
printf("%d",si);
return 0;
}
