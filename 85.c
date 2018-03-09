#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i,len;
char s[100];
printf("\n enter the string:");
scanf("%s",&s);
len=strlen(s);
for(i=0;i<len;i++)
{
if(i%2==0)
{
printf("%c",s[i]);
}
}
printf("\t");
for(i=0;i<=len;i++)
{
if(i%2==1)
{
printf("%c",s[i]);
}
}
getch();
return 0;
}
