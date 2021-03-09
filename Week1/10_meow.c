#include <stdio.h>

// function prototype
void meow(int n);

int main(void)
{
    meow(3);
}

// function declaration
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}