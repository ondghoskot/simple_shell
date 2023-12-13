#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>

extern char **environ;

char *scanner(void);
int _strcmp(char *s1, char *s2);
char *_strdup(char *src);
char **transfer(char *l);
int executer(char **c, char **argv);

void ppr(char *c, size_t len);
void imFree(char **sa);

char *_strcpy(char *dest, char *src);
int getenvpath(char **c);
char *_strcat(char *dest, char *src);
int _strlen(char *str);
int gettheenv(char **arg);
char *hPath(char *thepath);

#endif
