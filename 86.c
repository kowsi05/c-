#include<stdio.h>
#include<conio.h>
int main()
{
char a[100];
int i,count;
printf("\n enter the input:");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==a[i+1])
{
count=1;
break;
}
}
if(count==1)
{

printf("\nno");
}
else
{
printf("\nyes");
}
getch();
return 0;
}
