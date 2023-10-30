#include "main.h"
/**
 * _strlen - returns the len of string
 * @str: the string
 * Return: the string lenght
 */
int _strlen(char *str)
{
	int len = 0;

	if (!str)
	return (0);
	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * create_file - creates a function that creats file
 * @filename: is the name of the file to be created
 * @text_content: is a NULL terminated string to
 * write to the file.
 * Return: 1 on success , -1 on filure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes = 0;
	int len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	len = _strlen(text_content);

	if (len)
	bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
