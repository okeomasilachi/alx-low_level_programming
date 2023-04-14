#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of file to append text to
 * @text_content: content to append
 *
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, mlen, r;

	if (!filename)
	{
		r = -1;
	}

	if (filename != NULL)
	{
		mlen = strlen(text_content);

		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			r = -1;
		}
		else 
		{
			if (text_content != NULL)
			{
				write(fd, text_content, mlen);
				r = 1;
				close(fd);
			}
			else
				r = -1;
		}
	}

	return (r);
}
