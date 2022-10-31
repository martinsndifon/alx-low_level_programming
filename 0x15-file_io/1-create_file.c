#include "main.h"

/**
 * int create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wfd, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;
	i += 1;

	wfd = write(fd, text_content, i);
	if (wfd == -1)
		return (-1);

	close(fd);

	return (1);
}
