#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    enum days={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    char day[50];
    printf("\n enter the day:");
    scanf("%s",&day);
    if(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday")

    {
        printf("no");
    }
    else if(day=="saturday"||day=="sunday")
    {
        printf("yes");

    }
    else
    {
    printf("\n enter a valid choice!");
    }
    getch();
    return 0;
}
