#include <stdio.h>
#include<conio.h>
int main()
{
    int n, i, num = 0;

    printf("Enter a positive integer: ");
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
     printf("yes");
    }

    else
        printf("no");
    getch();
    return 0;
}
