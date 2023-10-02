#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUFFER_SIZE 64

int main(int argc, char *argv[]) {
  int fd;
  Elf64_Ehdr header;
  char buffer[BUFFER_SIZE];
  
  if (argc != 2) {
    fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
    exit(98);
  }

  fd = open(argv[1], O_RDONLY);
  if (fd == -1) {
    perror("Error opening file");
    exit(98);
  }

  read(fd, &header, sizeof(header));

  printf("ELF Header:\n");
  printf("  Magic:   %02x %02x %02x %02x\n", 
        header.e_ident[EI_MAG0],
        header.e_ident[EI_MAG1],
        header.e_ident[EI_MAG2],
        header.e_ident[EI_MAG3]);  

  printf("  Class:                           ");
  switch (header.e_ident[EI_CLASS]) {
  case ELFCLASS32: printf("ELF32\n"); break;
  case ELFCLASS64: printf("ELF64\n"); break;
  default: printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
  }

  printf("  Data:                            ");
  switch (header.e_ident[EI_DATA]) {
  case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
  case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
  default: printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
  }  

  printf("  Version:                         %d (current)\n", header.e_ident[EI_VERSION]);
  
  printf("  OS/ABI:                          ");
  switch (header.e_ident[EI_OSABI]) {
    case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
    case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
    case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
    case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
    case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
    case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
    case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break; 
    case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
    case ELFOSABI_ARM: printf("ARM\n"); break;
    case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
    default: printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
  }

  printf("  ABI Version:                     %d\n", header.e_ident[EI_ABIVERSION]);

  printf("  Type:                            ");
  switch (header.e_type) {
  case ET_REL: printf("REL (Relocatable file)\n"); break;
  case ET_EXEC: printf("EXEC (Executable file)\n"); break;
  case ET_DYN: printf("DYN (Shared object file)\n"); break;
  case ET_CORE: printf("CORE (Core file)\n"); break;
  default: printf("<unknown: %x>\n", header.e_type);
  }

  printf("  Entry point address:             0x%lx\n", header.e_entry);
  
  close(fd);

  return 0;
}
