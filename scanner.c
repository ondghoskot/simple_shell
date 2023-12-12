#include "main.h"

/**
 * scanner - function that scans and reads the line for input
 * Return: pointer to line read
 */
char *scanner(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	if (isatty(STDIN_FILENO))
		ppr("$ ", 2);
	nread = getline(&line, &len, stdin);
	if (nread == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}

