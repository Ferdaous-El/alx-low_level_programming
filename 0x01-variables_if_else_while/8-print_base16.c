#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
	}
	for (j = 0; j < 6; j++)
	{
		putchar(j + 'a');
	}
	putchar('\n');
	return (0);
}
