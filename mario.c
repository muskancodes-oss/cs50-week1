#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Ask for height between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print pyramid
    for (int i = 1; i <= height; i++)
    {
        // Print spaces
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // Print hashes
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
