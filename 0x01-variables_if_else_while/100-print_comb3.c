#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 
 */
int main(void)
{
int i;
int j;

for (i = 48; i < 58; i++)
{
for (j = 48; j = 58; j++)
{
if (i != j && i == 56)
{

putchar(i);
putchar(j);
if (j == 57 && i == 56)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
