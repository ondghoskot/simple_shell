#include "main.h"

/**
 * ppr - function that prints to the stdout
 * @len: number of chars to print
 * @c: chars to print
 * Return: nothing
 */
void ppr(char *c, size_t len)
{
	write(STDOUT_FILENO, c, len);
}

/**
 * imFree - function that frees a null terminated string
 * @sa: pointer to pointer of nts
 * Return: nothing
 */
void imFree(char **sa)
{
	int x = 0;

	if (sa == NULL)
		return;
	while (sa[x])
	{
		free(sa[x]);
		sa[x] = NULL;
		x++;
	}
	free(sa);
	sa = NULL;
}

/**
 * hPath - function that handles a path command
 * @thepath: is the path to handle
 * Return: exit status
 */

char *hPath(char *thepath)
{
	int i = 0;
	struct stat temp;

	for (; thepath[i]; i++)
	{
		if ((thepath[i] == '/') && (stat(thepath, &temp) == 0))
			return (_strdup(thepath));

	}
	return (NULL);
}

/**
 * intoa - function that converts integer to ascii equivalent
 * @i: integer to convert
 * Return: string of ascii equivs
 */
char *intoa(int i)
{
	char frame[20];
	int n, first, last;
	char temp;

	n = 0;
	if (i == 0)
		frame[n++] = '0';
	while (i > 0)
	{
		frame[n++] = (i % 10) + '0';
		i = i / 10;
	}
	frame[n] = '\0';

	first = 0;
	last = n - 1;
	while (first < last)
	{
		temp = frame[first];
		frame[first] = frame[last];
		frame[last] = temp;
		first++;
		last--;
	}

	return (_strdup(frame));
}

/**
 * _perror - function that prints the error message
 * @tag: string of the shell's name
 * @c: string of a command
 * @ind: string of the index of the error message
 * Return: nothing
 */
void _perror(char *tag, char *c, int ind)
{
	char *indice;
	char error[] = ": not found\n";

	indice = intoa(ind);

	write(STDERR_FILENO, tag, _strlen(tag));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, indice, _strlen(indice));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, c, _strlen(c));
	write(STDERR_FILENO, error, _strlen(error));

	free(indice);
}
