#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alpahbets in lowercase
 * followed by a new line
 * Return: Ouptut the value 0 when executed successfully.
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
