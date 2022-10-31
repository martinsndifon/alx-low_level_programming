#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the text file to read from
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, rfd;
	ssize_t i;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf)
		return (0);

	rfd = read(fd, buf, letters);
	if (rfd < 0)
	{
		free(buf);
		buf = NULL;
		return (0);
	}
	buf[letters + 1] = '\0';

	close(fd);

	i = write(STDOUT_FILENO, buf, rfd);
	if (i < 0)
	{
		free(buf);
		buf = NULL;
		return (0);
	}
	free(buf);
	buf = NULL;

	return (i);
}
