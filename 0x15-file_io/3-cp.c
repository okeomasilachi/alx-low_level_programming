#include "main.h"

/**
 * main - entry point of program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: on success 0
*/

int main(int ac, char **av)
{
	int ff, ft, ftc, ffc;
	char *buf;
	ssize_t nr;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	ft = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	ff = open(av[1], O_RDONLY);
	if (ff == -1)
	{
		close(ft);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buf = malloc(BUF_OKI);
	while ((nr = read(ff, buf, BUF_OKI)) > 0)
	{
		write(ft, buf, nr);
	}
	free(buf);
	ffc = close(ff), ftc = close(ft);
	if (ffc == -1 || ftc == -1)
	{
		if (ffc == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd 1");
		else
			dprintf(STDERR_FILENO, "Error: Can't close fd 2");
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
