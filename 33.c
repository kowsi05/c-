#include<stdio.h>
void main()

{
 char a[100];
 int i, cnt=0;
 printf("enter a sentence");
 scanf("%[^\n]s",&a);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]==' ')
 {
 cnt=cnt+1;
 }
 
 }
 printf("\n number of white space=%d",cnt);
}
