#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_status, write_status;
	char buffer[1024];
	ssize_t bytes_read;

	/* Check the number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open the source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Open or create the destination file for writing */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	/* Copy the content of file_from to file_to */
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write_status = write(fd_to, buffer, bytes_read);
		if (write_status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	/* Close the file descriptors */
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	return (0);
}
