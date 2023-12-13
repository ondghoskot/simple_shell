#ifndef MAIN_H
#define MAIN_H

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

/* main S.S functions */
char *scanner(void);
char **transfer(char *l);
int executer(char **c, char **argv, int ind);
char *gettheenv(char *arg);
char *hPath(char *thepath);
char *getenvpath(char *c);

/* recurrence functions */
void ppr(char *c, size_t len);
void imFree(char **sa);
char *intoa(int i);
void _perror(char *tag, char *c, int ind);

/* string functions */
char *_strdup(char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strlen(char *str);

#endif
