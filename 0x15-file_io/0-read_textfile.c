#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reading text file print - STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- Bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t t;
	ssize_t fd;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

