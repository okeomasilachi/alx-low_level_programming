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
	ssize_t bytes_written, bytes_read;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}
