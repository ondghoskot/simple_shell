#include "main.h"

/**
 * gettheenv - function that replace getenv func
 * @arg: an argument
 * Return: NULL if false, env if true
 */

int gettheenv(char **arg)
{
char *temp;
char *pass;
char *val;
char *viron;
int i = 0;
while (environ[i])
{
temp = _strdup(environ[i]);
pass = strtok(temp, "=");
if (_strcmp(pass, arg) != 0)
{
val = strtok(NULL, "\n");
viron = _strdup(val);
free(temp), temp = NULL;
return (viron);
}
free(temp), temp = NULL;
i++;
}
return (NULL);
}

/**
 * getenvpath - function that gives the path
 * @c: pointer to given command
 * Return: exit status
 */

int getenvpath(char **c)
{
struct stc src;
char *path;
char *command;
char *folder;
char *result;

result = hPath(*c);
if (result != NULL)
{
return (result);
}

path = gettheenv("PATH");
folder = strtok(path, ":");
while (folder)
{
command = malloc(_strlen(folder) + _strlen(c) + 2);
if (command)
{
_strcpy(command, folder);
_strcat(command, "/");
_strcat(command, c);
if (stc(command, &src) == 0)
{
free(path), path = NULL;
return (command);
}
free(command), command = NULL;
folder = strtok(NULL, ":");
}
}
free(path), path = NULL;
return (NULL);
}

/**
 * hPath - function that handles a path command
 * @thepath: is the path to handle
 * Return: exit status
 */

char *hPath(char *thepath)
{
int i = 0;
struct astr temp;
for (; thepath[i]; i++)
{
if (thepath[i] == '/')
{
if (astr(thepath, &temp) == 0)
{
return (_strdup(thepath));
}
else
{
return (NULL);
}
}
}
}
