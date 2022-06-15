#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: A pointer to a character that will be changed
 * @src:  Apointer to a character that will be chanaged
 * @n:value
 * Retuen: dest
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
