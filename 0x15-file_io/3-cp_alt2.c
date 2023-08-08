#include "main.h"

/**
 * print_error - Print an error message to standard error.
 * @msg: The error message to print.
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
}

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open_source_file(argv[1]);
	fd_to = open_dest_file(argv[2]);

	copy_file_content(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * open_source_file - Open the source file for reading.
 * @filename: The name of the source file.
 *
 * Return: The file descriptor.
 */
int open_source_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Can't read from source file");
		exit(98);
	}
	return fd;
}

/**
 * open_dest_file - Open or create the destination file for writing.
 * @filename: The name of the destination file.
 *
 * Return: The file descriptor.
 */
int open_dest_file(const char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		print_error("Error: Can't write to destination file");
		exit(99);
	}
	return fd;
}

/**
 * copy_file_content - Copy the content from source to destination file.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 */
void copy_file_content(int fd_from, int fd_to)
{
	ssize_t bytes_read;
	char buffer[1024];

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		ssize_t bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Error: Can't write to destination file");
			exit(99);
		}
	}
}

/**
 * close_file - Close a file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		print_error("Error: Can't close file descriptor");
		exit(100);
	}
}
