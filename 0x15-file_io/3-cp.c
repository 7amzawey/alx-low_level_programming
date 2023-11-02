#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |  S_IROTH)
void _exit1(const char *filename);
void _exit2(const char *filename);
/**
 * main - copies the content of a file to another
 * @argc: the number of arguments
 * @argv: a pointer to arguments
 * Return: the copied file
 */
int main(int argc, char **argv)
{
int from_fd = 0, to_fd = 0;
ssize_t b;
char buf[BUFSIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, USAGE), exit(97);
}
from_fd = open(argv[1], O_RDONLY);
if (from_fd == -1)
{
_exit1(argv[1]);
}
to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (to_fd == -1)
{
_exit2(argv[2]);
}
while ((b = read(from_fd, buf, BUFSIZE)) > 0)
{
if (write(to_fd, buf, b) != b)
{
_exit2(argv[2]);
}
}
if (b == -1)
{
_exit1(argv[1]);
}
if (close(from_fd) == -1)
{
dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
}
if (close(to_fd) == -1)
{
dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);
}
return (0);
}
/**
 * _exit1 - exits the programe when it cant read
 * @filename: is the filename
 */
void _exit1(const char *filename)
{
dprintf(STDERR_FILENO, ERR_NOREAD, filename), exit(98);
}
/**
 * _exit2 - exit the programe when it cant write
 * @filename: is the file name
 */
void _exit2(const char *filename)
{
dprintf(STDERR_FILENO, ERR_NOWRITE, filename), exit(99);
}
