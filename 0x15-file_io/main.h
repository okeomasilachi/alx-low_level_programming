#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>


/**
 * _strlen_recursion - entry point of he program
 * @s: the string to perform operation on
 * Return: returns the lenght of a srting
 */

int _strlen(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen(s + 1);
	}

	return (i);
}

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);


#endif /* MAIN_H */
