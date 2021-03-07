#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // gets user input from cli
    string answer = get_string("What's your name? ");

    // formats the string variable into the output
    printf("Hello, %s", answer);
}