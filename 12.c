#include <stdio.h>
int main()
{
int n, aft = 0, rem, bef;

    printf("Enter an integer: ");
    scanf("%d", &n);

    bef = n;

    while( n!=0 )
    {
        rem = n%10;
        aft = aft*10 + rem;
        n /= 10;
    }

   
    if (bef == aft)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
    
}
