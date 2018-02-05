#include<stdio.h>
int main()
{
	char a[100];
	int len,i,l=0,ns,n;
	printf("\n enter the input:");
	gets(a);
	len=strlen(a);
	while(a[i]!='\0')
	{
	for(i=0;a[i] !='\0'; i++)
	{
             l = l + 1;
            }
            
		if(a==' '||a=='\t'||a=='\n')
		n=ns++;
            
	}
	l=l-n;

   printf("The number of characters in the string are %d\n", l);
	
	return 0;
}
