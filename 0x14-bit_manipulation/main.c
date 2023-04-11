#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 2048;
    set_bit(&n, 2000);
    printf("%lu\n", n);

    n = 2048;
    set_bit(&n, 10);
    printf("%lu\n", n);
    return (0);
}
