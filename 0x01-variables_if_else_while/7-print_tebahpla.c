#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabeth in reverse,
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
