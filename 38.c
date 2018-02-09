#include<stdio.h>
void swap(int *n1,int *n2)
{
int temp=*n1;
*n1=*n2;
*n2=temp;
}
int main()
{
int n1,n2;
printf("enter the value of n1 and n2:");
scanf("%d%d",&n1,&n2);
swap(&n1,&n2);
printf("%d\n%d",n1,n2);
return 0;
}
