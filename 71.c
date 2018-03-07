#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
char a[100], b[100];
printf("Enter a string");
gets(a);
strcpy(b,a);
strrev(b);
if (strcmp(a,b) == 0)
printf("yes");
else
printf("no");
getch();
return 0;
}
