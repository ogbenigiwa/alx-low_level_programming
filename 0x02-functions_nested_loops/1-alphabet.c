#include "main.h"
/**
 * print_alphabet: print lowercase alphabet
 * followed by a new line.
 * @ch: The character to print.
 * Return: void
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
