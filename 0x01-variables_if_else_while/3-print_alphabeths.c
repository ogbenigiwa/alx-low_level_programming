#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabeth in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	int upper = 'A';

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
