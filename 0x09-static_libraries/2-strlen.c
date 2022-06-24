#include "main.h"
/**
 * _strlen - length of a string
 * @s:A pointer to an integer
 *
 * Return: void that means our code is good
 */
int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
