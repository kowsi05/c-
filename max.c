#include <stdio.h>
int main()
{
 int a[20],max=a[0],i;
 printf("\n enter the ten numbers:");
 for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<10;i++)
 {
 	if(a[0]>a[i])
 	max=a[i];
 }
 printf("the maximum element is %d",max);
 return 0;
}
