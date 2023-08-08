#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments passed
 * @argv: Double pointer to arguments
 *
 * Return: 0 on success, exit status otherwise
 */
int main(int argc, char **argv)
{
	int source_fd, destination_fd, n;
	char buffer[1024];

	/* Check if the correct number of arguments is provided */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open the source file for reading */
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Create or truncate the destination file and open for writing */
	destination_fd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	/* Read and write loop */
	while ((n = read(source_fd, buffer, 1024)) > 0)
	{
		if (write(destination_fd, buffer, n) != n || destination_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	/* Check for read errors */
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Close file descriptors */
	if (close(source_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}
	if (close(destination_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		exit(100);
	}

	return (0);
}
