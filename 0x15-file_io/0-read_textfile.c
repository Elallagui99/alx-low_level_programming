#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bnum;
	char *l;

	if (!filename || !letters)
		return (0);

	l = malloc(sizeof(char) * letters);
	if (l == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(l);
		return (0);
	}

	bnum = read(fd, l, letters);
	if (bnum == -1)
	{
		free(l);
		close(fd);
		return (0);
	}
	bnum = write(STDOUT_FILENO, l, bnum);
	if (bnum == -1)
	{
		free(l);
		close(fd);
		return (0);
	}
	free(l);
	close(fd);
	return (bnum);
}
