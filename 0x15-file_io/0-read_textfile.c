#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to POSIX standard output
 * @filename: is the file
 * @letters: is the number of letters it should read
 * and print
 * Return: the actual number of letters it could
 * 0 if filename == NULL , if it cant read and open
 * if write fails or output does not expected
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buff[BUFSIZE * 8];

	if (filename == NULL || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	bytes = read(fd, &buff[0], letters);
	bytes = write(STDOUT_FILENO, &buff[0], bytes);
	close(fd);
	return (bytes);
}
