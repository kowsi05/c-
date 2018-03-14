#include <stdio.h>
#include<conio.h>
int main()
{
int n, i, num = 0;
printf("Enter an integer: ");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
        if(n%i==0)
        {
            num=1;
            break;
        }
    }

    if (num==0)
    {
     printf("no");
    }

    else
        printf("yes");
   getch();
    return 0;
}
