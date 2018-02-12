#include<stdio.h>
#include<conio.h>
int main()
{
int n,pow=0;
printf("\n enter the number:");
scanf("%d",&n);
while(n!=1)
    {
        if(n%2!=0)
        {
            pow=1;
        }
        n=n/2;
    }

    if(pow==0)
        printf("\n yes");
    else
        printf("\n no");
getch();
return 0;
}





