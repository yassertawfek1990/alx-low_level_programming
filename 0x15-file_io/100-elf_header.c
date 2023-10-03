#include "main.h"

/**
 * main - Displays the in
 * @argc: Tts supplied to the program.
 * @argv: An array of pointers 
 * Return: 0
 * Description: If the file is not an ELF File
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int f, k;

	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		cl(f);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]), exit(98);
	}
	k = read(f, h, sizeof(Elf64_Ehdr));
	if (k == -1)
	{
		free(h), cl(f);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]), exit(98);
	}
	ch(h->e_ident);
	printf("ELF Header:\n");
	pm(h->e_ident);
	pc(h->e_ident);
	pd(h->e_ident);
	pv(h->e_ident);
	po(h->e_ident);
	pa(h->e_ident);
	pt(h->e_type, h->e_ident);
	pe(h->e_entry,h->e_ident);

	free(h);
	cl(f);
	return (0);
}

/**
 * cl - Clole.
 * @ef: The r of the ELF file
 * Description: If the 98.
 */

void cl(int ef)
{
	if (close(ef) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ef);
		exit(98);
	}
}

/**
 * pt - Prder.
 * @t: he ype.
 * @i: p to
 * Description: If the 98.
 */
void pt(unsigned int t, unsigned char *i)
{
	if (i[EI_DATA] == ELFDATA2MSB)
		t >>= 8;
	printf("  Type:                              ");
	switch (t)
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
		printf("<unknown: %x>\n", t);
	}
}

/**
 * pe - Prieader.
 * @m: The
 * @i: theass.
 * Description: If the 98.
 */

void pe(unsigned long int m, unsigned char *i)
{
	printf("  Entry point address:               ");
	if (i[EI_DATA] == ELFDATA2MSB)
	{
		m = ((m << 8) & 0xFF00FF00) | ((m >> 8) & 0xFF00FF);
		m = (m << 16) | (m >> 16);
	}

	if (i[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)m);

	else
		printf("%#lx\n", m);
}

/**
 * po - Priader.
 * @i: Ainterersion.
 * Description: If the 98.
 */
void po(unsigned char *i)
{
	printf("  OS/ABI:                            ");
	switch (i[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", i[EI_OSABI]);
	}
}

/**
 * pa - Prin.
 * @i: Asion.
 * Description: If the 98.
 */

void pa(unsigned char *i)
{
	printf("  ABI Version:                       %d\n", i[EI_ABIVERSION]);
}

/**
 * pd - Printsader.
 * @i: A pointeclass.
 * Description: If the 98.
 */

void pd(unsigned char *i)
{
	printf("  Data:                              ");
	switch (i[EI_DATA])
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
		printf("<unknown: %x>\n", i[EI_CLASS]);
	}
}

/**
 * pv - Prinr.
 * @i: A pointersion.
 * Description: If the 98.
 */

void pv(unsigned char *i)
{
	printf("  Version:                           %d", i[EI_VERSION]);
	switch (i[EI_VERSION])
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
 * pm - Printeader.
 * @i: A poiners.
 * Description: Magies.
 */

void pm(unsigned char *i)
{
	int z;

	printf("  Magic:   ");
	for (z = 0; z < EI_NIDENT; z++)
	{
		printf("%02x", i[z]);
		if (z == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * pc - Prilheader.
 * @i: A pointss.
 * Description: If the 98.
 */

void pc(unsigned char *i)
{
	printf("  Class:                             ");

	switch (i[EI_CLASS])
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
		printf("<unknown: %x>\n", i[EI_CLASS]);
	}
}

/**
 * ch - Checiile.
 * @i: A pnter to an ar.
 * Description: Ife 98.
 */

void ch(unsigned char *i)
{
	int z;

	for (z = 0; z < 4; z++)
	{
		if (i[z] != 127 && i[z] != 'E' && i[z] != 'L' && i[z] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
