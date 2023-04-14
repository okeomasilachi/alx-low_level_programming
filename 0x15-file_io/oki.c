#include "main.h"

int main()
{
	int fb;
	char *m = "okeoma is a boy";
	int wt, mlen = strlen(m);
	fb = open("ok", O_WRONLY | O_APPEND);
	wt = write (fb, m, mlen);
	close(fb);
	return (wt);
}
