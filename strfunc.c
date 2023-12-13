#include "main.h"

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
