#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10,
 * starting from 0, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
