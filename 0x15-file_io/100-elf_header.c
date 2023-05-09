#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - prints an error message and exits the program
 * @msg: the error message to print
 */
void print_error(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
 * print_elf_header - prints the ELF header information
 * @header: a pointer to the ELF header structure
 */
void print_elf_header(Elf64_Ehdr* header) {
	printf("Magic:");
	for (int i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class:");
	switch (header->e_ident[EI_CLASS]) {
		case ELFCLASS32: printf("ELF32\n"); break;
		case ELFCLASS64: printf("ELF64\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("Data:");
	switch (header->e_ident[EI_DATA]) {
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:");
	switch (header->e_ident[EI_OSABI]) {
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("UNIX - GNU/Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
		case ELFOSABI_MODESTO: printf("Novell - Modesto\n"); break;
		case ELFOSABI_OPENBSD: printf("UNIX - OpenBSD\n"); break;
		case ELFOSABI_ARM_AEABI: printf("ARM EABI\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("ABI Version:%d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:");
	switch (header->e_type) {
		case ET_NONE: printf("NONE (None)\n"); break;
		case ET_REL:  printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN:  printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("Entry point address:%lx\n", header->e_entry);
}

int main(int argc, char* argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	char* filename = argv[1];
	int fd = open(filename, O_RDONLY);
	if (fd == -1) {
		perror("open");
		exit(98);
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header)) {
		perror("read");
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "%s: not an ELF file\n", filename);
		exit(98);
	}

	print_elf_header(&header);

	close(fd);
	return 0;
}
