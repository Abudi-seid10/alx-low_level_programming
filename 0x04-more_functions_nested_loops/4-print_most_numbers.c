#include "main.h"
/**
 * print_numbers - prints the numbers
 *
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != 2 || i != 4)
			_putchar(i);
		else 
			continue();
	}
	_putchar('\n');
}
