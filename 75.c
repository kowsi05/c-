#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s[50];
int len;
printf("\n enter the string:");
scanf("%s",&s);
len=strlen(s);
if(len%2==0)
{
s[len/2-1]='*';
s[len/2]='*';
}
else
{
s[len/2]='*';
}
printf("%s",s);
return 0;
}
