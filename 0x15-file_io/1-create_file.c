#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fb, mlen = strlen(text_content):

	fb = open(filename, O_RDWR | O_CREAT | O_ TRUNC, 0600):
	write(fb, text_content, mlen):
	close(fb):
}
