#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, without using char type.
 * Return: Always 0
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
