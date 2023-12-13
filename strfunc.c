#include "main.h"

/**
 * _strcmp - compares lexic of two strings
 * @s1: first string
 * @s2: string to compare to
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		break;
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * _strdup - duplicates a string
 * @src: string to duplicate
 * Return: pointer to the string dup
 */
char *_strdup(char *src)
{
	int i;
	int size = 0;
	char *ptr = NULL;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[size] != '\0')
		size++;
	ptr = (char *) malloc((size + 1) * sizeof(char));

	if (ptr != NULL)
	{
		while (i <= size)
		{
			ptr[i] = src[i];
			i++;
		}
	}
	return (ptr);
}

/**
 * _strcpy - a function that copy str
 * Return: dest of the string
 * @dest: this is a dest string
 * @src: this is the source string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int t;

	while (src[i] != '\0')
	{
		t = src[i];
		dest[i] = t;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - a function that cat a string
 * Return: dest of the string
 * @dest: this is a dest string
 * @src: this is the char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j + i + 1] = '\0';
	return (dest);
}

/**
 * _strlen - function that calc str len
 * @str: pointer to string
 * Return: the len of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
