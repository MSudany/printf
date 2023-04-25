#include "main.h"

/**
 * dtob - converts decimal to binary
 * @ap: arg list
 * Return: number of printed char
 */

int dtob(va_list ap)
{
	int ar[32], i, j;
	int n = va_arg(ap, int);

	i = 0;
	while (n > 0)
	{
		ar[i] = n % 2;
		n = n / 2;
		i++;
	}

	for(j = i - 1; j >= 0; j--)
		_putchar(ar[j] + '0');

	return (i);
}