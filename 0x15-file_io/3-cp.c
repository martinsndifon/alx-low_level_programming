#include "main.h"

/**
 * main - copies the content of first file to second file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int fd_to_read, fd_to_write, n, rfd_f, rfd_t;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_to_read = open(argv[1], O_RDONLY);

	if (fd_to_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((n = read(fd_to_read, buf, 1024)) > 0)
	{
		if (fd_to_write < 0 || write(fd_to_write, buf, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_to_read);
			exit(99);
		}
	}

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	rfd_f = close(fd_to_read);
	rfd_t = close(fd_to_write);

	if (rfd_f < 0 || rfd_t < 0)
	{
		if (rfd_f < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to_read);
		if (rfd_t < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to_write);
		exit(100);
	}

	return (0);
}
