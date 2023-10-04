#include"main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * This function uses nested loops to compute and print the multiplication
 * table for the numbers 0 through 9, using the formula i * j for each pair
 * of numbers (i, j). The multiplication result is printed to the console
 * using the putchar function, with each digit of the result printed separately
 * without the use of a temporary buffer array.
 */
void times_table(void)
{
	int i, j, result, digit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result < 10)
			{
			digit = result;
			putchar(digit + '0');
			}
		else
		{
			digit = result / 10;
			putchar(digit + '0');
			digit = result % 10;
			putchar(digit + '0');
		}
		if (j < 9)
		{
			putchar(',');
			putchar(' ');
			if (i * (j + 1) < 10)
			putchar(' ');
		}
	}
	 putchar('\n');
}
}
