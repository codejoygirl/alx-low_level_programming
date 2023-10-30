#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - To check if a file is an elf file
 * @e-ident: Pointer to the array containing the Elf magic num.
 *
 * Description: exit code 98, if not an Elf file
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
			e_ident[index] != 'E' &&
			e_ident[index] != 'L' &&
			e_ident[index] != 'F' &&)
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - This prints the magic number of ELF header
 * @e_ident: Point to array that contains the ELF magic number
 *
 * Description: The magic numbers are seperated by space
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf("  magic:   ");

	for (index = 0; index < E_NIDENT; index++)
	{
		printf("%02x", e_ident[inde]);

		if (index == E_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}

}

/**
 * print_class - This prints the class of an Elf header
 * @e_ident: Pointer to an array containing the Elf class.
 */
void print_class(unsigned char *e_ident)
{
	printf("  class:				");

	switch (e_ident [EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	 case ELFCLASS32:
		printf("ELF32\n");
		break;
	 case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 *print_data - This prints the data of ELF header
 *@e_ident: Pointer to an array containing the Elf Data
 */
void print_data(unsigned char *e_ident)
{
	 printf("  data:                                ");

        switch (e_ident [EI_DATA])
        {
        case ELFDATANONE:
                printf("none\n");
                break;
         case ELFDATA2LSB:
                printf("2's complement, little endian\n");
                break;
         case ELFDATA2MSB:
                printf("2's complement, big endian\n");
                break;
        default:
                printf("<unknown: %x>\n", e_ident[EI_DATA]);
        }
}
/**
 * print_version - This version of ELF header
 *  @e_ident: Pointer to an array containing the Elf version
 */
void print_version(unsigned char *e_ident)
{
	 printf("  version:                                %d",
			  e_ident[EI_VERSION]);

        switch (e_ident [EI_VERSION])
        {
        case EV_CURRENT:
                printf(" (current)\n");
                break;
        default:
                printf("\n");
		break;
        }
}
/**
 * print_0sabi - This prints the OS/ABI of ELF heade
 * @e_ident: Pointer to an array containing the Elf version
 */
 void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                                ");

        switch (e_ident [EI_OSABI])
        {
 	case ELFOSABI_NONE:
                printf("UNIX - System V\n");
                break;
	case ELFOSABI_HPUX:
                printf("UNIX - HP-UX\n");
                break;
 	case ELFOSABI_NETBSD
                printf("UNIX - NetBSD\n");
                break;
	case ELFOSABI_LINUX
                printf("UNIX - Linux\n");
                break;
	case ELFOSABI_SOLARIS
                printf("UNIX - Solaris\n");
                break;
	case ELFOSABI_IRIX
                printf("UNIX - IRIX\n");
                break;
	case ELFOSABI_FREEBSD
                printf("UNIX - FreeBSD\n");
                break;
	case ELFOSABI_TRU64
                printf("UNIX - TRU64\n");
                break;
	case ELFOSABI_ARM
                printf("UNIX - ARM\n");
                break;
	case ELFOSABI_STANDALONE
                printf("Standalone - App\n");
                break;
        default:
                printf("<unknown: %x>\n", e_ident[EI_OSABI]);
        }
}
/**
 * print_abi - This prints the ABI version of ELF header
 * @e_ident: Pointer to an array containing the Elf ABI version
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                                %d\n",
			e_ident[EI_ABIVERSION]);
}
/**
 * print_type - This prints type of an ELF header
 * @e_type: ELF type
 * @e_ident: Pointer to an array containing the Elf class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("Type						");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}
/**
 * print_entry - Print entry point of ELF Header
 * @e_entry - Address of ELF entry point
