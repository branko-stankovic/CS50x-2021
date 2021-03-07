#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's your name? ");

    // \n prints new line
    printf("Hello, %s\n", answer);
}