#include "main.h"

/**
 * print_most_numbers - prints the numbers
 *
 */
void more_numbers(void)
{
	int x;
	int j;
	for(x=0,x < 10,x++)
	{
		for (j=0,j<16,j++)
			_putchar(j);
		_putchar("\n");
	}
	_putchar("\n");
}
