#include<stdio.h>
int main()
{

	int len,i,l=0,ns,n,cnt=0;
	char a[100];
            printf("enter a sentence");
            scanf("%[^\n]s",&a);
	printf("\n enter the statement:");
	gets(a);
	len=strlen(a);
	while(a[i]!='\0')
	{
	for(i=0;a[i] !='\0'; i++)
	{
             l = l + 1;
            }
            
		if(a == ' '||a == '\t'||a == '\n')
		n=ns++;
            
	}
	l=l-n;

   printf("The number of characters in the string are %d\n", l);
   for(i=0;a[i]!='\0';i++)
 {
     if(a[i]==' ')
    {
       cnt=cnt+1;
     }
 
 }
 printf("\n number of caracters without white spaces is:%d",l-cnt);

	
	return 0;
}
