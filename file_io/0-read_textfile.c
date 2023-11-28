#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename:text file to be read and printed.
 * @letters: is the number of letters it should read and print.
 * Return:the actual number of letters it could read and print or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* "file descriptor" */
	char *buf;/* buffer pointer to a block of memory allocated */
	ssize_t bytre; /* bytes read */

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	bytre = read(fd, buf, letters);
	if (bytre == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buf, bytre) != bytre)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (bytre);
}
