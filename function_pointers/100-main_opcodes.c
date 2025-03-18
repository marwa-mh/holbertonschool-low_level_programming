#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints its own opcodes
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
    int num_bytes = atoi(argv[argc - 1]);
    int i=0;
    //printf("%d\n",argc);
    
    if (num_bytes < 0)
    {
        printf("Error\n");
        return 2;
    }
    unsigned char *ptr = (unsigned char *)main;
    for ( i = 0; i < num_bytes; i++)
    {
        printf("%02x ", ptr[i]);
    }
    printf("\n");
    return 0;
}
