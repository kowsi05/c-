#include<stdio.h>
#include<conio.h>
int main()
{
int n,k,i,a[100];
printf("\n enter the numbers:");
scanf("%d%d",&n,&k);
printf("enter the %d numbers:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{

    if(a[i]==k)
    {

        printf("%d",a[k-1]);
    }
}
getch();
return 0;
}
