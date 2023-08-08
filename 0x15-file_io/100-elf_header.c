#include "main.h"

/**
 * print_error - Prints an error message to stderr and exits with status 98
 * @message: The error message to print
 */
void print_error(char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * main - Displays information contained in the ELF header of an ELF file
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	/* Check if the correct number of arguments is provided */
	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	/* Open the ELF file for reading */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Cannot open file");

	/* Read ELF header */
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
		print_error("Error: Cannot read ELF header");

	/* Check if the file is an ELF file */
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Error: Not an ELF file");

	/* Print information from ELF header */
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", elf_header.e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
	printf("  Class:                             %s\n",
		elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
		elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "None");
	/* Add more information to print as required by the task */

	/* Close the file descriptor */
	close(fd);
	return (0);
}
