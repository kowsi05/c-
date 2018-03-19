#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[100];
int i;
printf("Enter a string: ");
scanf("%[^\n]s",str);
for(i=0; str[i]!='\0'; i++)
{
if(i==0)
{
if((str[i]>='a' && str[i]<='z'))
str[i]=str[i]-32;
}
if(str[i]==' ')
{
++i;
if(str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-32;
}
}
}
printf("Capitalize string is: %s\n",str);
return 0;
}


