#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints alphabeth in lowercase, followed by a new line.
 * Print all alphabeth except q && e.
 * Return: 0 (success)
 */
int main(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
