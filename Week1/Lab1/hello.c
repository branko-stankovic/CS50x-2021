#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // asks user for their name
    string name = get_string("What is your name? ");

    // greets the user by their name
    printf("hello, %s\n", name);
}