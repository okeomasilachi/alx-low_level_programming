#include "main.h"

/**
 * read_textfile - reads file and writes to stdout
 * @filename: address of file to be read
 * @letters: number of letters to be read and printed
 *
 *
 * Return: number of read/written characters on success else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, k, w, r;
	char rbuf[OKWI];

	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		r = read(fd, rbuf, letters);
		k = strlen(rbuf);
		w = write(STDOUT_FILENO, &rbuf, k);

		if (r == -1 || w == -1)
		{
			n = 0;
		}
		else
		{
			n = r;
		}
	}
	else
	{
		n = 0;
	}

	return (n);
}
