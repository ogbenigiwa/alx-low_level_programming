/**
 * swap_int - function to swap pointer values
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
