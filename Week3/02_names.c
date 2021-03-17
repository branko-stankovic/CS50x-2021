#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        // compare strings with strcmp() by ascii values
        // returns negative value, or 0, or positive value
        if (strcmp(names[i], "Ron") == 0)
        {
            printf("FOUND\n");
            return 0;
        }
    }
    printf("NOT FOUND\n");
    return 1;
}