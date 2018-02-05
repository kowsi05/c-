
#include<stdio.h>
int main()
{
	char a[100];
	int i,ns=0;
	printf("\n enter the input:");
	gets(a);
            while(a[i]!='\0')
	{
            if (a==' '||a=='\n'||a=='\t')
                       ns++;
		
	}

   printf("The number of characters in the string are %d\n", ns);
	
	return 0;
}
