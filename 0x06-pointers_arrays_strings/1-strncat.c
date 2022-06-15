#include "main.h"
/**
 * _strncat - Concatenates two strings,
 * @dest: Destination.
 * @src:  source.
 * @n: prints amount of bytes used from source
 * Retuen: the pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\n')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
