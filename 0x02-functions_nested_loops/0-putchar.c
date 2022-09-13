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

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}

