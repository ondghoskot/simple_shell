#include "main.h"

/**
 * bccheck - a function that check builtin cmds
 * Return: an int type
 * @cmd: the command we need to check
 */

int bccheck(char *cmd)
{
char *bcmd[] = {
"exit", "env", "setenv", "cd", NULL
};
int i = 0;

while (bcmd[i])
{
if (_strcmp(cmd, bcmd[i]) == 0)
{
return (1);
}
i++;
}
return (0);
}

/**
 * printenv - a function that exit the sshell
 * Return: an int type
 * @prtcmd: the command to free
 * @st: the status of the command
 */
void printenv(int *st, char **prtcmd)
{
int j = 0;
while (environ[j])
{
ppr(environ[j], _strlen(environ[j]));
ppr("\n", 1);
j++;
}
(*st) = 0;
imFree(prtcmd);
}

/**
 * exitTheShell - a function that exit the sshell
 * Return: an int type
 * @exitcmd: the command we need to free
 * @st: the status of the exit command
 */
void exitTheShell(int *st, char **exitcmd)
{
imFree(exitcmd);
exit(*st);
}

/**
 * bhcmd - a function that handle checked builtin cmds
 * Return: an int type
 * @hbcmd: the command we need to check
 * @st: the exit status
 */
void bhcmd(char **hbcmd, int *st)
{
if (_strcmp(hbcmd[0], "env") == 0)
printenv(st, hbcmd);
else if (_strcmp(hbcmd[0], "exit") == 0)
exitTheShell(st, hbcmd);
}
