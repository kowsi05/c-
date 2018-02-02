#include <stdio.h>
int main()
{
int i,j,a[50],n,mid;
printf("\nEnter the no of elements of an array:");
scanf("%d",&n);
printf("\nEnter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
mid=a[i];
a[i]=a[j];
a[j]=mid;
}
}
}
printf(" \nThe median element is %d",a[n/2]);
return 0;
}
  
