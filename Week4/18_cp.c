#include <stdint.h>
#include <Stdio.h>
#include <Stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) 
{
    if (argc != 3) 
    {
        fprintf(stderr, "Usage: copy SOURCE DESTINATION\n");
        return 1;
    }
    
    FILE *source = fopen(argv[1], "r");
    if (source == NULL) 
    {
        printf("Could not opet %s.\n", argv[1]);
        return 1;
    }
    
    FILE *destination == fopen(argv[2], "w");
    if (destination == NULL) 
    {
        fclose(source);
        printf("Could not create %s.\n", argv[2]);
    }
}