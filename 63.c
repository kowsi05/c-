#include<stdio.h>
#include<conio.h>
int main()
{
char a[50];
int len,i,count=1;
printf("\n enter the input:");
gets(a);
len=strlen(a);
for(i=0;i<len;i++)
	{
		if(a[i]!=' ' && a[i+1]==' ')
			count=count+1;
	}
	printf("\n%d",count);
  getch();
	return 0;
}
