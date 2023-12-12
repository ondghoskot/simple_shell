#include "main.h"

/**
 * executer - function that executes the commands
 * @c: pointer to given command
 * @argv: CLA vector of args
 * Return: exit status
 */
int executer(char **c, char **argv)
{
	pid_t kid;
	int i = 0;

	kid = fork();
	if ((kid == 0) && (execve(c[0], c, environ) == -1))
	{
		perror(argv[0]);
		imFree(c);
		exit(127);
	}
	else
	{
		waitpid(kid, &i, 0);
		imFree(c);
	}
	return (WEXITSTATUS(i));
}
