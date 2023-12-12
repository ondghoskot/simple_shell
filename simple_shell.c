#include "main.h"

/**
 * main - the main function of the S.S project
 * @ac: number of CL args
 * @av: CL args array
 * Return: 0 (Sucess)
 */
int main(int ac, char **av)
{
	char *l = NULL, **c = NULL;
	int i = 0;
	(void) ac;

	while (true)
	{
		l = scanner();
		if (l == NULL)
		{
			if (isatty(STDIN_FILENO))
				ppr("\n", 1);
			return (i);
		}
		c = transfer(l);
		if (!c)
			continue;
		i = executer(c, av);
	}
	return (0);
}
