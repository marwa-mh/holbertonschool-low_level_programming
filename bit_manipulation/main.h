#ifndef LIST_H
#define LIST_H
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _pow(int x, int y);
int _pow_index(int base, unsigned long int n);
int _putchar(char c);
#endif
