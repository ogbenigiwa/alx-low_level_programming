#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that prints the alphabeth in lowercase
 * followed by a new line.
 *
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
	putchar('\n');
	return (0);
}
