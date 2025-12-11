#include <cs50.h>
#include <stdio.h>

int change_owed(void);

int main(void)
{
    int count = 0;

    int cents = change_owed();
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents = cents - 25;
        }
        else if (cents >= 10)
        {
            cents = cents - 10;
        }
        else if (cents >= 5)
        {
            cents = cents - 5;
        }
        else if (cents >= 1)
        {
            cents = cents - 1;
        }
        count++;
    }

    printf("%i\n", count);
}

int change_owed(void)
{
    int cents;
    do
    {
        cents = get_int("Change Owed: ");
    }
    while (cents < 0);
    return cents;
}
