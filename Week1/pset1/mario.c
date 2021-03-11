#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // asks user for the pyramid height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // prints a row of pyramid
    for (int i = 0; i < height; i++)
    {
        // prints left part of pyramid
        for (int j = height - 1; j >= 0; j--)
        {
            if (j > i)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        // prints the gap
        printf("  ");

        // prints right part of pyramid
        for (int k = 0; k < height; k++)
        {
            if (k <= i)
            {
                printf("#");
            }
        }

        // prints end of line
        printf("\n");
    }
}