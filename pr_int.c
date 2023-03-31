#include "main.h"

int pr_int(int n)
{
	int len = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;
	}
	if (n > 9)
	{
		len += pr_int(n / 10);
	}
	_putchar(n % 10 + '0');
	len++;
	return len;
}
