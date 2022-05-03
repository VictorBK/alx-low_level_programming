#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: number of letters to be read and printed
 * @filename: file to read
 * Return: actual number of letters it could read and print, or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_read, fd_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	fd_read = read(fd, buffer, letters);
	if (fd_read == -1)
		return (0);
	fd_write = write(STDOUT_FILENO, buffer, fd_read);
	if (fd_write == -1)
	{
		free(buffer);
		return (0);
	}
	if (fd_read != fd_write)
		return (0);
	free(buffer);
	close(fd);
	return (fd_write);
}

