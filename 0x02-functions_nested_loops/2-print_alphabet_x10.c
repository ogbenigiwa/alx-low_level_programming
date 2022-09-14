#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet
 * 10 times followed by a new line
 * @counter: Counts the number of occurence
 * @ch: Character to print
 * Return: None
 */
void print_alphabet_x10(void)
{
	int counter;
	counter = 0;

	while (counter < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		counter++;
	}
}
