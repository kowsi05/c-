#include <stdio.h>
int main() 
{
int  dif,n[50], value, sum=0, i;
printf("Enter the numbers:");
for(i=0;i<=n[i];i++)
{
scanf("%d", &n[i]);
}
dif=n[0]-n[1];
value = n[0];
for(i=0;i<=n[i]; i++)
{
printf("%d ", value);
sum=sum+value;
value=value+dif;
}
printf("%d",value);
return 0;
}
