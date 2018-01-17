#include <stdio.h>
int main()
{
    int num, orgno, rem, ret = 0;

    printf("Entr no ");
    scanf("%d", &num);

    orgno = num;

    while (orgno != 0)
    {
        rem = orgno%10;
        ret += rem*rem*rem;
        orgno /= 10;
    }

    if(ret == num)
        printf("yes");
    else
        printf("no");

    return 0;
}

