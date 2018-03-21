#include<stdio.h>
#include<conio.h>
int main()
{
int n,k,i,a[100],count=0;
printf("\n enter the total number of elements and the element to find:");
scanf("%d%d",&n,&k);
printf("enter the %d numbers:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
count++;
}
if(count==k)
{
    printf("\n%d",a[k]);
}
}
getch();
return 0;
}
