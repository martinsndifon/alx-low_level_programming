#include "main.h"

/**
 * ssize_t read_textfile(const char *filename, size_t letters) - a function that reads
 * a text file and prints it to the POSIX standard output.
 * @filename: name of the text file to read from
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 	   0 if the file can not be opened or read
 * 	   0 if filename is NULL
 * 	   0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[1024];
	int fd;
	ssize_t i;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);

	close(fd);

	i = printf("%s", buf);

	return (i);
}
