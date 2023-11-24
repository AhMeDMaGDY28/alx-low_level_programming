#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
unsigned int _strlen(const char *s);
unsigned int custom_pow(unsigned int base, unsigned int exponent);
unsigned int recursive(const char *b, unsigned int length, unsigned int power);
unsigned int binary_to_uint(const char *b);

#endif
