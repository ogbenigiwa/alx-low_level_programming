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
	int upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
