#include "main.h"

/**
 * transfer - function that turns args into array
 * @l: string of args
 * Return: pointer to array made
 */
char **transfer(char *l)
{
	char *t = NULL, *temp = NULL, dlm[] = " \t\n";
	char **c = NULL;
	int i = 0, j = 0;

	if (!l)
		return (NULL);
	temp = _strdup(l);
	t = strtok(temp, dlm);
	if (!t)
	{
		free(l), l = NULL;
		free(temp), temp = NULL;
		return (NULL);
	}
	while (t)
	{
		i++;
		t = strtok(NULL, dlm);
	}
	free(temp), temp = NULL;
	c = malloc(sizeof(char *) * (i + 1));
	if (c == NULL)
	{
		free(l), l = NULL;
		imFree(c);
		return (NULL);
	}
	t = strtok(l, dlm);
	while (t)
	{
		c[j] = _strdup(t);
		t = strtok(NULL, dlm);
		j++;
	}
	free(l), l = NULL;
	c[j] = NULL;
	return (c);
}
