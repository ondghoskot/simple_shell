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
	int i = 0, j = 1, ind = 0;

	(void) ac;
	for (; j > 0; j++)
	{
		l = scanner();
		if (l == NULL)
		{
			if (isatty(STDIN_FILENO))
				ppr("\n", 1);
			return (i);
		}
		ind++;
		c = transfer(l);
		if (c == NULL)
		{
			continue;
		}
		if (bccheck(c[0]))
		{
			bhcmd(c, &i);
		}
		else
			i = executer(c, av, ind);
	}
	return (0);
}
