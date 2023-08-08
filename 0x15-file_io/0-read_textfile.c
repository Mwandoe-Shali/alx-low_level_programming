#include "main.h"

/**
 * read_textfile - Reads and prints a text file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read
 * and printed, or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;	/* File descriptor */
	ssize_t num_read, num_written;
	char *buffer;	/* Buffer to hold read data */

	if (filename == NULL)
		return (0);

	/* Open the file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* Read from the file */
	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Write to standard output */
	num_written = write(STDOUT_FILENO, buffer, num_read);
	if (num_written != num_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Clean up and close the file */
	free(buffer);
	close(fd);
	return (num_read);
}
