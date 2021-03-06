#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include "holberton.h"

/**
 * read_textfile - Function reads a text file and prints
 *               it to the POSIX standard output
 * @filename: name of file to read to POSIX
 * @letters: Number of letters to read and print
 *
 * Return: 0- if, file cannot be opened or read, NULL, `write` fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, reader, printer;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	reader = read(fd, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[letters + 1] = '\0';

	printer = write(STDOUT_FILENO, buffer, letters);
	if (printer == -1)
		return (0);

	close(fd);
	free(buffer);
	return (printer);
}
