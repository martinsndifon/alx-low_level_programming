#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file to append the text to
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wfd, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (*(text_content + i) != '\0')
		i++;

	wfd = write(fd, text_content, i);
	if (wfd == -1)
		return (-1);

	close(fd);

	return (1);
}
