#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_status;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	/* Open or create the file with write permissions */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Get the length of text_content */
		while (text_content[len] != '\0')
			len++;

		/* Write text_content to the file */
		write_status = write(fd, text_content, len);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor */
	close(fd);

	return (1);
}
