#include "main.h"

/**
 * read_textfile - reads and prints to stdout a particular number of byte
 * @filename: file to read from
 * @letters: number of bytes to read
 *
 * Return: on success the number of bytes read
 * error 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t red, wrt;
	char *buf = malloc(sizeof(char) * letters);

	if (filename)
	{
		fd = open(filename, O_RDONLY);

		if (fd == -1)
		{
			free(buf);
			return (0);
		}
		red = read(fd, buf, letters);
		if (red == -1)
		{
			close(fd);
			free(buf);
			return (0);
		}
		wrt = write(STDOUT_FILENO, buf, letters);
		if (wrt == -1)
		{
			close(fd);
			free(buf);
			return (0);
		}
		close(fd);
		free(buf);
		return (red);
	}
	else
		return (0);
}
