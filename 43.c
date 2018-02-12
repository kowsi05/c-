#include<stdio.h>
#include<conio.h>
int main()
{
int s1[50],s2[50],i=0,j=0;
printf("\n enter the string 1 and 2:");
scanf("%s%s",s1,s2);
while(s1[i]!='\0')
{
i++;
}
while(s2[j]!='\0')
{
s1[i]=s2[j];
i++;
j++;
}
s1[i]='\0';
printf("\n the string is %s",s1);
getch();
return 0;
}
