#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int startSize;

    do
    {
        startSize = get_int("Enter a starting population size: ");
    }
    while (startSize < 9);

    // Prompt for end size
    int endSize;

    do
    {
        endSize = get_int("Enter an ending population size: ");
    }
    while (endSize < startSize);

    // Calculate number of years until we reach threshold
    int years = 0;

    while (startSize < endSize)
    {
        startSize = startSize + (startSize / 3) - (startSize / 4);
        years++;
    }

    // Print number of years
    printf("Years: %i\n", years);
}