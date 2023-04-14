#include "main.h"

int main()
{
	int fd, n;
	char rbuf[OKWI];
	int i, k = 114;
	fd = open("Requiescat", O_RDONLY);
	n = read(fd, rbuf, OKWI);
	/*k = strlen(rbuf);*/
	for (i = 0; i < k; i++)
		write(1, &rbuf[i],1);
	close(fd);
	putchar('\n');
	printf("%d", n);
	return (n);
}
