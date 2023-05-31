#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

int _printf(const char *format, ...);
void _buffer(char buffer[], int *index);
int _specifier(const char *format, char buffer[], int *index, va_list args);

int print_percent(va_list args);
int print_string(va_list args);
int print_char(va_list args);

#endif
