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
	}
	free(sa);
	sa = NULL;
}
