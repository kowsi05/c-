#include<stdio.h>
#include<conio.h>
int main()
{
int n,k,i,a[100],temp;
printf("\n enter the total number of elements and the element to find:");
scanf("%d%d",&n,&k);
printf("enter the %d numbers:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
temp=1;
break;
}
}
if(temp==1)
{
printf("\n yes");
}
else
{
    printf("\n no");
}
getch();
return 0;
}
