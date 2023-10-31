#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_validate - read file and validate the content
 * @ac: number of files
 * @av: name of each file
 */
void read_validate(int ac, char **av)
{
	int fp;
	ssize_t bytes;
	char *buff;
	int letters = 1024;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fp = open(av[1], O_RDONLY);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	buff = malloc(letters * sizeof(char));
	if (!buff)
		exit(0);

	bytes = read(fp, buff, letters);
	if (bytes == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close(fp);
}

/**
 * write_close - write the content into the other file and close it
 * @av: name of the files
 */
void write_close(char **av)
{
	int fp, close_fp;
	ssize_t bytes;
	char *buff;
	int len = 0;

	fp = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	buff = malloc(1024 * sizeof(char));
	if (!buff)
		exit(0);

	while (buff && buff[len])
		len++;

	bytes = write(fp, buff, len);
	if (bytes == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	close_fp = close(fp);
	if (close_fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
	free(buff);
}

/**
 * main - copies the content of a file to anther file
 * @argv: arguments
 * @argc: number of rguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	read_validate(argc, argv);
	write_close(argv);
	return (0);
}
