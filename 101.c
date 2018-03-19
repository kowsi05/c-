#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s[100];
int n,i,len,count=0;
printf("Enter a string and the number: ");
scanf("%s%d",&s,&n);
len=strlen(s);
for(i=len-1;i>=0;i--)
{
printf("%c",s[i]);
count++;
if(n==count)
{
break;
}
}
getch();
return 0;
}

