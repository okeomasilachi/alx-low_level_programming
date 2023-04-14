#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define OKWI 1000000 

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);


#endif /* MAIN_H */
