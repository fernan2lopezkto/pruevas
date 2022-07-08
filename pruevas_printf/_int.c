#include "main.h"

void rec(int i);
int contar_caracter(int n);

/**
 *
 *
 *
 */
int _int(va_list ptr)
{
	int n, l = 0;

	n = va_arg(ptr, int);
	l = contar_caracter(n);
	rec(n);
	return (l);
}

void rec(int i)
{
	if (i < 10)
		_putchar(i + '0');

	_putchar(i % 10 + '0');
	return (rec(i / 10));

}

int contar_caracter(int n)
{
	int l;

	while (n > 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}
