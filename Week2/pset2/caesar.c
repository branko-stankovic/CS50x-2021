#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // checks the number of command line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // tries to convert user key from string to integer
    int key = atoi(argv[1]) % 26;

    // if key is not valid, throw an error
    if (key <= 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // asks user for the plaintext
    string plaintext = get_string("plaintext: ");

    // prepares output for the ciphertext
    printf("ciphertext: ");


    // goes over each character of the plaintext, checks if it is lower or uppercase letter
    // if it is a letter, it converts it
    // if it is not a letter, it prints it out as it is
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            printf("%c", ((int) plaintext[i] - 97 + key) % 26 + 97);
        }
        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            printf("%c", ((int) plaintext[i] - 65 + key) % 26 + 65);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");
}