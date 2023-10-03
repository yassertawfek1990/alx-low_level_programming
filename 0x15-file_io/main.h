#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <elf.h>

#define BUFSIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void ch(unsigned char *i);
void pm(unsigned char *i);
void pc(unsigned char *i);
void pd(unsigned char *i);
void pv(unsigned char *i);
void pa(unsigned char *i);
void po(unsigned char *i);
void pt(unsigned int t, unsigned char *i);
void pe(unsigned long int m, unsigned char *i);
void cl(int ef);

#endif /* MAIN_H */
