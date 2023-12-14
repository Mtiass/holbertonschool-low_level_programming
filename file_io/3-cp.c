#include "main.h"
/**
 * main - program that copies the content of a file to another file.
 * @argc:Parameter that is a counter of arguments.
 * @argv:Paramter that is an array of arguments.
 * Return: an integer, 0 if success.
 */
int main(int argc, char *argv[])
{
	char *sourcef = argv[1], *destinyf = argv[2];
	int sourfd = open(sourcef, O_RDONLY);
	int destfd = open(destinyf, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[BUF_SIZE];
	ssize_t bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	if (sourfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourcef);
		exit(98); }
	destfd = open(destinyf, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destinyf);
		exit(99); }
	while ((bytes = read(sourfd, buffer, BUF_SIZE)) > 0)
	{
		if (write(destfd, buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destinyf);
			exit(99); } }
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourcef);
		exit(98); }
	if (close(sourfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sourfd);
		exit(100); }
	if (close(destfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destfd);
		exit(100); }
	return (0);
}
