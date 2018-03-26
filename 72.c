#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[50];
int i;
printf("\n enter the string: ");
scanf("%c",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
getch();
return 0;
}
