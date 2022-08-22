#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 *
 * @filename: pointer to the file name
 *
 * @letters: number of letters to be read and printed
 *
 * Return: the file content
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		return (0);
	}
	wd = write(STDOUT_FILENO, buffer, rd);
	if (wd == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (wd);
}
