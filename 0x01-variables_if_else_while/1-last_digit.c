#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The variable n will store a different value
 *every time you run this program
 * Return: Always outputs value 0 when successful.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf("%d and is greater tahn 5\n", n % 10);
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
