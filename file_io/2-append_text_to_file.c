#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return:1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytwr;
	int fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	bytwr = write(fd, text_content, strlen(text_content));
	if (bytwr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
