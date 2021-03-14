#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);

const int TOTAL = 3;

int main(void)
{
    int scores[TOTAL];

    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float) sum / length;
}