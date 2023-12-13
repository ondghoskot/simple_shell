#include "main.h"

/**
 * executer - function that executes the commands
 * @c: pointer to given command
 * @argv: CLA vector of args
 * @ind: indice
 * Return: exit status
 */
int executer(char **c, char **argv, int ind)
{
	pid_t kid;
	int i = 0;
	char *command;

	command = getenvpath(c[0]);
	if (command == NULL)
	{
		_perror(argv[0], c[0], ind);
		imFree(c);
		return (127);
	}
	kid = fork();
	if ((kid == 0) && (execve(command, c, environ) == -1))
	{
		free(command);
		command = NULL;
		imFree(c);
	}
	else
	{
		free(command);
		command = NULL;
		waitpid(kid, &i, 0);
		imFree(c);
	}
	return (WEXITSTATUS(i));
}
