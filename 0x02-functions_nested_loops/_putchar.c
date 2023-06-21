#include "main.h"

/**
 * _putchar - erites the character c to stdout
 * @c: The character to print
 *
 * Return: Always 1.
 * On error, -1 is returned, and errno is set appropiately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
