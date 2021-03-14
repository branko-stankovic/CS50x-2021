#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    // initialize counters;
    // words is 1 because of the edge cases:
    // - if there is only 1 word total and no spaces around it,
    // - or the last word without a space afterwards
    int letters = 0;
    int words = 1;
    int sentences = 0;

    // get user input
    string text = get_string("Text: ");

    // iterate through each character in the sentence and check for type
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (tolower(text[i]) >= 'a' && tolower(text[i]) <= 'z')
        {
            letters++;
        }
        else if (text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            sentences++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
    }

    // calculate L and S values for the Coleman-Liau index
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    // calculate the index
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // print the results according to the index grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index <= 16)
    {
        printf("Grade %.0f\n", index);
    }
    else
    {
        printf("Grade 16+\n");
    }
}