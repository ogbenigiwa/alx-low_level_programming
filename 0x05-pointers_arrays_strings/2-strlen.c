/**
 * _strlen - Count the length of string
 * @s: string to be counted
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
