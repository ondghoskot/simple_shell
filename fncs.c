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

/**
 * _strcmp - compares lexic of two strings
 * @s1: first string
 * @s2: string to compare to
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * _strdup - duplicates a string
 * @src: string to duplicate
 * Return: pointer to the string dup
 */
char *_strdup(char *src)
{
	int i;
	int size = 0;
	char *ptr = NULL;

	i = 0;
	if (src	== NULL)
		return (NULL);
	while (src[size] != '\0')
		size++;
	ptr = (char *) malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	while (i <= size)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
