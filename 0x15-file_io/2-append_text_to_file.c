#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append text to.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file for appending */
	fd = open(filename, O_WRONLY | O_APPEND);
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
