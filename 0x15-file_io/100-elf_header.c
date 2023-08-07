#include "main.h"

/**
 * print_error - print an error message to stderr
 * @message: the message to print
 *
 * Return: void
*/
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * uns_switch - print the OS/ABI of an ELF file
 * @header: struct of type Elf64_Ehdr
 *
 * Return: void
*/
void uns_switch(const Elf64_Ehdr *header)
{
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("  OS/ABI:			UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("  OS/ABI:			HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("  OS/ABI:			NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("  OS/ABI:			Linux\n");
			break;
		default:
			printf("  OS/ABI:			Unknown\n");
			break;
	}
}

/**
 * print_elf_info - prints the elf information of a file
 * @header:struct of type Elf64_Ehdr
 *
 * Return: void
*/
void print_elf_info(const Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:	");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", header->e_ident[i]);
	printf("\n  Class:			%s\n",
		header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
		header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "Unknown");
	printf("  Data:				%s\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" :
		header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big-endian" :
		"Unknown");
	printf("  Version:			%d (current)\n", header->e_ident[EI_VERSION]);
	uns_switch(header);
	switch (header->e_type)
	{
		case ET_NONE:
			printf("  Type:				NONE\n");
			break;
		case ET_REL:
			printf("  Type:				REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("  Type:				EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("  Type:				DYN (Position-Independent Executable file)\n");
			break;
		case ET_CORE:
			printf("  Type:				CORE (Core file)\n");
			break;
		default:
			printf("  Type:				Unknown\n");
			break;
	}
	printf("  Entry point address:		%#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Error opening file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Error reading ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	print_elf_info(&header);
	close(fd);
	return (0);
}
