#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main worker
 * Return: value passer
 */
int main(void)
{
	char lcase = 'a';
	char luper = 'A';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	for (luper = 'A'; luper <= 'Z'; luper++)
        {
                putchar(luper);
        }
	putchar('\n');
	return (0);
}

