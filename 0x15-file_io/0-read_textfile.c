#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - To Read a text file and also print to STDOUT.
 * @filename: The Path of the filename to read.
 * @letters: The number of the letters to read and write.
 *
 * Return: 0 if the `filename' is NULL or cannot open or be read,
 * 0 if the call to write fail or is less than the number
 * of bytes, or total number of bytes used to call write.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}
	if (w != r)
		return (0);
	return (r);
}
