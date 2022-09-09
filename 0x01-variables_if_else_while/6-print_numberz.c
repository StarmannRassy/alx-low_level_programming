#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * Return: Always output the value 0, when code runs successfully.
 */

int main(void)

{
	char ch = '0';

	for (ch = '0'; ch <= 10; ch++)
		putchar(ch);
	putchar("\n");
	return (0);
}
