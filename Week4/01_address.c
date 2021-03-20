#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n);

    printf("%i\n", *&n);
}