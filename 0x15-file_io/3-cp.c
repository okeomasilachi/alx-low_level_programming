#include "main.h"
/**
 * main - copies the content fromone file to another file
 * @argc: argument count
 * @argv: argument variables
 * Return: success
 */
int main(int argc, char *argv[])
{
	int filef, filet, Cfilef, Cfilet, y = 98;
	char buff[BUFFER];
	ssize_t br, __attribute__((unused)) bw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	filef = open(argv[1], O_RDONLY);
	if (filef == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(y);
	}
	filet = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (filet == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((br = read(filef, buff, BUFFER)) > 0)
	{
		bw = write(filet, buff, br);
		if (bw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	Cfilef = close(filef);
	if (Cfilef == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd 1\n"), exit(100);
	}
	Cfilet = close(filet);
	if (Cfilet == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd 2\n"), exit(100);
	}
	return (0);
}
