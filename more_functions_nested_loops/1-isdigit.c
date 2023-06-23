# include "main.h"

/**
 *_isdigit _ function that checks for a digit
 *@c: check if c is a digit
 *Return 0
 */
int _isdigit(int c)
{
	for (c = '0'; c <= '9'; c++)
	{
		if (c >= '0' || c <='9')
		{
			return 1;
		}
		else
			return 0;
	}
}
