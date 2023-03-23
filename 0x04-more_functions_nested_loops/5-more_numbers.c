#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, j, k;

	for (j = 0; j < 10; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '4'; k++)
			{
				_putchar(i);
				if (i == '9')
				{
					_putchar(k);
				}
			}
		}
	_putchar('\n');
	}
}
