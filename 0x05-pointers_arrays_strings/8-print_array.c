#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integer
 * @a: A pointer to an integer to be updated
 * @n: return value n
 * Return: void which means our answer is correct
 */

void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n");
}
