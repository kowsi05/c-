#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
int a,b;
printf("\n enter the nos: a and b");
scanf("%d%d",&a,&b);
swap(&a,&b);
return 0;
}
void swap(int *x,int *y)
{
int *temp;
*temp = *x;
*x = *y;
*y = *temp;
printf("\n %d%d",*x,*y);
}
