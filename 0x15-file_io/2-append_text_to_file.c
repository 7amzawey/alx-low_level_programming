#include "main.h"
/**
 * _strlen - the string length
 * @str: the string
 * Return: the string lenght
 */
int _strlen(char *str)
{
	int len = 0;

	if (!str)
		return (0);
	while (str++)
		len++;
	return (len);
}
/**
 * append_text_to_file - appends text at the end of
 * of file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to
 * add at the end of the file.
 * Return: 1 on success and -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len, bytes = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	len = _strlen(text_content);

	if (len)
	{
		bytes = write(STDOUT_FILENO, text_content, len);
	}
	close(fd);
	if (bytes == -1)
	{
		return (-1);
	}
	return (1);
}
