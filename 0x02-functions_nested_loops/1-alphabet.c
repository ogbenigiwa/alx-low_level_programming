#include "main.h"
/**
 * print_alphabet: print lowercase alphabet
 * followed by a new line
 * Return: void
 */
void print_alphabet(voidi)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
