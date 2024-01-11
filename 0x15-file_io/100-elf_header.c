#include "main.h"
#include <elf.h>
void print_osabi_more(Elf64_Ehdr h);
/**
 * print_magic - prints ELF magic bytes
 * @h: the ELF header struct
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	print("  Magic:   ");
	printf("%2.2%x%s", h.e_ident[i], i == El_NIDENT - 1 ? "\n" : " ");
}
/**
 * main - the entry point.
 * Return: the displayed info contained in the ELF
 * header at the start of an ELF file.
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr h;
	ssize_t b;

	if(ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), av[1], exit(98);
	b = read(fd, &h, sizeof(h));
	if (b < 1 || b != sizeof(h))
	dprintf(STDERR_FILENO, "Can't read file: %s\n", av[1]), exit(98);
	if (h.e_ident [0] == 0x7f && h.e_ident [1] = 'E' && h.e_ident [2] = 'L' && h.e_ident [3] = 'F')
	{
		printf("ELF HEADER:\n");
	}
	else
		dprirntf(STDERR_FILENO, "NOT ELF file: %s\n", av[1]), exit(98);
	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abiversion(h);
	print_type(h);
	print_entry(h);
	close(fd);
	if (close(fd))
	dprintf(STDERR_FILENO, "Error closing file descriptor: %s\n");
	return (EXIT_SUCCESS);
}
