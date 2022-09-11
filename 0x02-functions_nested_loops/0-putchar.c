#include "main.h"

/**
 * main - this code prints the word _putchar
 *
 * Return: Always 0, when sucessful.
*/

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[1] != '\0')
	{
		_putchar(s[1]);
		i++;
	}
	_putchar(10);

	return (0);
}

