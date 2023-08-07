#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Desc: My header file for 0x15. C - File I/O
 *      containing all function prototypes.
 */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/*************************FUNCTION PROTOTYPES************************/

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
