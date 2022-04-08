#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main worker
 * Return: value passer
 */
int main(void)
{
    int x = '0';
	for(x = '0'; x <= '9'; x++)
    {
        putchar(x);
        if (x != '9')
        {
            putchar(',');
            putchar(' ');
        }
	}

	putchar('\n');
	return (0);
}
