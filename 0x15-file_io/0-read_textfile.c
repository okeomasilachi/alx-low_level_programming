#include "main.h"

/**
 * read_textfile - reads and prints to stdout a particular number of byte
 * @filename: file to read from
 * @letters: number of bytes to read and written
 *
 * Return: on success number of bytes written
 * error 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t red, wrt;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || letters == NULL)
		return (0);

	fd  = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	red = read(fd, buf, letters);
	if (red == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wrt = write(STDOUT_FILENO, buf, letters);
	if (wrt == -1 || wrt != red)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (wrt);
}
