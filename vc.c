#include<stdio.h>
char c;
void main()
{
printf("Enter the character:");
scanf("%c",&c);
if(c=="a"||c=="e"||c=="i"||c=="o"||c=="u"||c=="A"||c=="E"||c=="I"||c=="O"||c=="U")
{
printf("it is vowel:");
}
else
printf("it is consonent:");
}
