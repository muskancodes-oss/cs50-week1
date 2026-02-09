#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;

    // Get positive amount of change
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    // Convert dollars to cents
    int cents = round(dollars * 100);

    int coins = 0;

    // Calculate number of coins
    coins += cents / 25;
    cents %= 25;

    coins += cents / 10;
    cents %= 10;

    coins += cents / 5;
    cents %= 5;

    coins += cents / 1;

    // Print result
    printf("%i\n", coins);
}
