#include <stdio.h>

int main()
{
    int a;
    printf("\n enter the year :");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        if (a % 100 == 0 && a % 400 != 0)
        {
            printf("\n the year is not a leap year");
        }
        else
        {
            printf("\n the year is a leap year");
        }
    }
    else
    {
        printf("\n the year is not a leap year");
    }
    return 0;
}
