#include<stdio.h>
#include<conio.h>
int main()
{
int a[50],i;
printf("\n enter the string");
scanf("%d",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]%10)==0)
{

printf("\n yes");
}
else{
    printf("\n no");
}
}
getch();
return 0;
}
