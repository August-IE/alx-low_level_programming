#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Desc: My header file for 0x14. C - Bit manipulation project
 *      containing all function prototypes.
 */

#include <stdlib.h>

/*************************FUNCTION PROTOTYPES************************/

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* MAIN_H */
